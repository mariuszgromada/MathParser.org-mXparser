# mXparser 6.2.0 — poprawki po ocenie Claude Code

Stan: 2026-11-14T01:38:04.727292+00:00. Repozytorium `D:\Codex\MathParser.org-mXparser`, katalog `CURRENT`. Bez commitów, push, publikacji, podpisywania i zmian licencjonowania.

## Wynik

Wdrożyłem trzy korekty: **Bell(25)**, **ujemny ogon dystrybuanty Studenta dla skończonych v>200** oraz **asinh dla małych argumentów**. Zostały przeniesione w kolejności Java → C# → C++17; JS/WASM korzysta ze świeżo zbudowanego tego samego silnika C++. Usunąłem wskazane zbędne formatowanie. Doprecyzowałem zakres M04; dotychczasowe konwencje Gamma i minusa zachowałem.

Użytkownik następnie wyraźnie polecił: **„Nie musisz ponownie walidować”**. Nie uruchamiałem kolejnych zestawów po tej decyzji; rozpoczęte ponowienie macierzy C++ zostało przerwane. Poniżej rozdzielam wykonane wyniki od formalnej aktualności dowodów. **Nie deklaruję nowego pełnego CPP Gate PASS ani ponownej walidacji runtime JS/WASM.** Kompilacja i link nowego WASM zakończyły się powodzeniem.

## 1. Ocena wszystkich uwag

| Uwaga Claude | Powiązanie | Ocena i końcowy status |
|---|---|---|
| 1. Bell(25) | M03 / Claude B2 | Potwierdzona regresja poprzedniej poprawki; **fixed** we wszystkich źródłach silnika |
| 2. Ujemny ogon cStud | M06 / Claude C2 | Potwierdzona utrata precyzji; **fixed** dla skończonego v>200 |
| 3. Bardzo duże v | M06 | Potwierdzone ograniczenie dokładności; **intentionally unchanged**, wyniki zmierzone poniżej |
| 4. Małe asinh | M08 / Claude C4 | Potwierdzona wcześniejsza niestabilność; **fixed** krótkim szeregiem zamiast nowej zależności log1p |
| 5. Zakres M04 | M04 / Claude C1 | **Clarified / partial**: GammaU naprawione; pełna Gamma i normalizacja w biegunach pozostają konwencją |
| 6. Formatowanie/EOF | Poprzedni diff | **fixed**, zmiany wyłącznie postaci zapisu tam, gdzie operacje były identyczne |
| Nowa obserwacja minusa | Składnia, obok E05 | Potwierdzona istniejąca konwencja; **intentionally unchanged**, brak zmiany priorytetów |

## 2. Bell(25): przywrócona dokładność bez zawężania zakresu

Dokładna liczba całkowita B25 wynosi **4638590332229999353**. Poprzedni trójkąt w double dawał reprezentowaną wartość **4638590332229998592**. Poprawnie zaokrąglony double to **4638590332229999616**; różnica wynosi 1024, czyli jedno ULP.

Po istniejącym zmniejszeniu n o1, gałąź `n<25` oblicza trójkąt w signed64-bit (`long` Java/C#, `Long=long long` C++). Zatem pierwotne argumenty do25 zachowują dokładne całkowite sumy i pojedyncze końcowe zaokrąglenie. Dla26 i większych pozostaje double, który usuwał wcześniejsze przepełnienie long. Nie alokuje się obu tablic w jednym wywołaniu. Zachowane granice argumentu, sprawdzenie rozmiaru i anulowanie.

**Koszt:** to samo O(n²) czasu i pamięci, komórka8bajtów, dla małych n przywrócona wcześniejsza arytmetyka całkowita. Brak BigInteger lub wysokiej precyzji w produkcji.

**Źródła:**

- [java/src/org/mariuszgromada/math/mxparser/mathcollection/MathFunctions.java:387](D:/Codex/MathParser.org-mXparser/CURRENT/java/src/org/mariuszgromada/math/mxparser/mathcollection/MathFunctions.java:387)
- [c-sharp/src/org/mariuszgromada/math/mxparser/mathcollection/MathFunctions.cs:400](D:/Codex/MathParser.org-mXparser/CURRENT/c-sharp/src/org/mariuszgromada/math/mxparser/mathcollection/MathFunctions.cs:400)
- [cpp/lib/org/mariuszgromada/math/mxparser/mathcollection/MathFunctions.cpp:341](D:/Codex/MathParser.org-mXparser/CURRENT/cpp/lib/org/mariuszgromada/math/mxparser/mathcollection/MathFunctions.cpp:341)

W C# lokalna tablica nazywa się `bellTriangleLong`: literalna nazwa Java `bellTriangle` koliduje z późniejszą deklaracją w otaczającym zakresie i powoduje CS0136. Jest to konieczna adaptacja reguł języka; pierwszy nieudany build i późniejszy poprawny przebieg zachowano. C++ zachowuje nazwę z Javy i istniejące ArrayPtr/new_Array oraz jawne poszerzenie do double.

## 3. Ujemny ogon Studenta: bez odejmowania od1

Dotychczas dodatnia gałąź wyliczała `1-0.5*I`, a ujemna ponownie odejmowała ją od1. Gdy ogon jest mały, oba odejmowania kasują cyfry wyniku. Ujemna gałąź dla skończonego v>200 zwraca teraz bezpośrednio `0.5*regularizedBeta(v/2,0.5,v/(v+x*x))`.

Przykład `cdfStudentT(-8,250)`:

| Wartość | Wynik |
|---|---:|
| Przed | `2.3314683517128287e-14` |
| Po, Java | `2.3264007594587895e-14` |
| Referencja mpmath90cyfr | `0.000000000000023264007594587719643555447789428413803461889090783415497366865025508805542044937992285986` |
| Błąd względny przed | `0.0021783` |
| Błąd względny po | `7.46e-15` |

Zachowane istniejące strażniki NaN, v<=0, nieskończonych x oraz epsilon-zera. Warunek jawnie wyklucza v=+Infinity: nie oblicza się wtedy Infinity/Infinity, a dotychczasowa gałąź granicy normalnej pozostaje bez zmian. Przypadki v<=200 zachowują wcześniejsze algorytmy.

**Koszt:** ten sam pojedynczy algorytm regularizowanej beta, z pominięciem dwóch odejmowań. Brak nowej iteracji, alokacji lub zastępowania skończonych wyników NaN.

**Źródła:**

- [java/src/org/mariuszgromada/math/mxparser/mathcollection/ProbabilityDistributions.java:742](D:/Codex/MathParser.org-mXparser/CURRENT/java/src/org/mariuszgromada/math/mxparser/mathcollection/ProbabilityDistributions.java:742)
- [c-sharp/src/org/mariuszgromada/math/mxparser/mathcollection/ProbabilityDistributions.cs:656](D:/Codex/MathParser.org-mXparser/CURRENT/c-sharp/src/org/mariuszgromada/math/mxparser/mathcollection/ProbabilityDistributions.cs:656)
- [cpp/lib/org/mariuszgromada/math/mxparser/mathcollection/ProbabilityDistributions.cpp:536](D:/Codex/MathParser.org-mXparser/CURRENT/cpp/lib/org/mariuszgromada/math/mxparser/mathcollection/ProbabilityDistributions.cpp:536)

## 4. Małe asinh: ograniczony, szybszy szereg

Dla `1e-8<=|a|<0.01` funkcja liczy teraz w postaci Hornera:

```text
a * (1 - a²*(1/6 - a²*(3/40 - a²*5/112)))
```

To pierwsze cztery wyrazy [szeregu DLMF4.38.1](https://dlmf.nist.gov/4.38.E1). W tym zakresie oszacowanie pierwszym pominiętym wyrazem daje względny błąd obcięcia poniżej3.04e-18; osobno występuje zwykłe zaokrąglenie operacji double. Dla mniejszych argumentów zachowano dawny szybki zwrot a, a poza nową gałęzią wcześniejszy algorytm i obsługę dużych argumentów. Zachowano nieparzystość i znak zera.

`asinh(1e-7)` zmieniło się z `9.999999994336786e-8` na `9.999999999999982e-8`, zgodne z poprawnie zaokrągloną referencją dla wejściowego double. Gęsta siatka obejmuje liczby subnormalne, oba znaki i sąsiedztwa progów. W nowej małej gałęzi zastosowano granicę2ULP w izolowanej diagnostyce; istniejących progów testów nie zmieniono.

**Koszt:** O(1), kilka mnożeń/dodawań zamiast sqrt i log. Bez pętli, alokacji i nowych API .NET. Dlatego nie trzeba dodawać osobnego przenośnego helpera log1p. To poprawka dla wskazanego małego zakresu, nie obietnica nowego algorytmu całej dziedziny asinh.

**Źródła:**

- [java/src/org/mariuszgromada/math/mxparser/mathcollection/MathFunctions.java:2987](D:/Codex/MathParser.org-mXparser/CURRENT/java/src/org/mariuszgromada/math/mxparser/mathcollection/MathFunctions.java:2987)
- [c-sharp/src/org/mariuszgromada/math/mxparser/mathcollection/MathFunctions.cs:2657](D:/Codex/MathParser.org-mXparser/CURRENT/c-sharp/src/org/mariuszgromada/math/mxparser/mathcollection/MathFunctions.cs:2657)
- [cpp/lib/org/mariuszgromada/math/mxparser/mathcollection/MathFunctions.cpp:1506](D:/Codex/MathParser.org-mXparser/CURRENT/cpp/lib/org/mariuszgromada/math/mxparser/mathcollection/MathFunctions.cpp:1506)

## 5. Potwierdzone ograniczenia, bez zmiany konwencji

### Bardzo duże stopnie swobody

Poniższe wartości `qStud(.975,v)` przed/po tej partii są identyczne. Referencja: SciPy1.18.1. W innych punktach siatki korzystano z mpmath90cyfr.

| v | Wynik Java przed=po | Referencja | Błąd względny |
|---|---:|---:|---:|
| 1e+06 | `1.9599663569971042` | `1.9599663568141068` | `9.337e-11` |
| 1e+08 | `1.9599640129277491` | `1.9599640082627663` | `2.38e-09` |
| 1e+10 | `1.9599641257680376` | `1.959963984777281` | `7.194e-08` |

To potwierdzone ograniczenie dokładności, a nie regresja tej partii. Nie oznaczam go jako naprawionego. Różnica dużych logGamma i argument beta bliski1 ograniczają obliczenia; sama zamiana log na log1p nie wystarczy do pełnej korekty CDF i kwantyla. Nie wprowadzono tu nowego przybliżenia asymptotycznego bez osobnego ustalenia zakresu/błędu i porównań w całej objętej nim dziedzinie. Poprzednie poprawki przepełnień dla umiarkowanych df pozostają.

### M04 i bieguny Gamma

Zgadzam się, że słowo fixed bez wskazania zakresu było zbyt szerokie. Naprawiona została górna niepełna Gamma jako dodatnia całka dla ujemnego całkowitego s i x>0. Pełna Gamma w biegunach nadal ma skończoną definicję mXparser, a P/Q są wyprowadzane z tej definicji. To nie standardowa normalizacja przez rzeczywistą Gamma w jej biegunie.

Przykłady zachowane: `regularizedGammaUpperQ(-7,3)=-0.00351034694533136`, `regularizedGammaLowerP(-7,.5)=16295.65110866426`. Nie należy interpretować tych wartości jako prawdopodobieństw w[0,1]. Zmiana do standardowego analitycznego przedłużenia P=1,Q=0 wymagałaby skoordynowanej zmiany istniejącej konwencji rodziny. Wpis M04 ma teraz status częściowy z jawnym rozdzieleniem GammaU od normalizacji.

### Minus literału i argumentu

Potwierdzone wcześniejsze zachowania `-2^2=4` oraz `-a^2=-4` dla a=2 pozostały. Również `2^-3^2` i `a^-b^c` mają zgłoszoną różnicę. Ta partia nie zmienia tokenizacji literałów ani priorytetów; nie uznaje tego za regresję E05. Rozstrzygnięcie konwencji składni jest osobną decyzją.

## 6. Mniejszy diff

W C#/C++ przywrócono wcześniejszą postać niezmienionych return/normalizacji m.in. w gęstości Studenta, dodatniej CDF, gęstości chi²/F i NWD. Przywracano wyłącznie instrukcje o identycznym strumieniu operacji. Nowe gałęzie i wcześniejsze poprawki pozostały. Sprawdzono pierwotny stan końca każdego z23zmienionych plików produkcyjnych i przywrócono go tam, gdzie wcześniej dodano zbędną nową linię. Nie wykonano globalnego przeformatowania.

## 7. Faktyczne wyniki i decyzja o pominięciu powtórzenia

| Sprawdzenie | Rzeczywisty wynik | Ograniczenie |
|---|---|---|
| Pełna Java | 2313/2313 PASS | Zestaw wykonany na zapisanej migawce przed pojawieniem się dodatkowych kopii generatora |
| Pełny C# net8 | 2313/2313 PASS | Jak wyżej; bez zmiany istniejących testów |
| Niezależna siatka Java |1427 PASS| Dokładne Bell przez niezależną całkowitą rekurencję dwumianową; asinh/beta mpmath90cyfr |
| Ta sama siatka C# |1427 PASS| Bez osobnych oczekiwań portu |
| Ta sama siatka na4kompilatorach C++ |Po1427 PASS| Na bibliotekach pierwszej macierzy; hashe DLL zapisane |
| Wcześniejsze sondy usterek |Java2867,C#2870,C++858/profil PASS| Ponowione na poprawionych źródłach/bibliotekach |
| Pełne testy pierwszej macierzy C++ |4×2365 PASS w oryginalnych JUnit| **Formalny wynik wrapperów FAILED** z powodu zmiany inwentarza źródeł w trakcie; nie stanowi CPP Gate PASS |
| Drugie pełne uruchomienie C++ |Przerwane| Po decyzji użytkownika o pominięciu ponownej walidacji; bez przypisywania PASS |
| Istniejący build C#5TFM |PASS,0błędów/ostrzeżeń| net481,netstandard2.1,netcoreapp3.1,net6,net8; kompilacja, nie5suite runtime |
| Nowy C++/WASM |Compile+link PASS|80kroków istniejącego targetu mxparser_js; Emscripten6.0.13 |
| Ponowne pełne zestawy JS/TS/browser |NOT_RUN, decyzja użytkownika| Nie przeniesiono starych wyników runtime na nowy binarny WASM |

Dokładne migawki, na których wykonano nowe pełne testy:

- java: `ce6f4ee95744589b402715d25b364ecc56dc8b928f93061800860d16fda25893`; [evidence-java-20261114T005559Z-f782523f/test-summary.json](D:/Codex/MathParser.org-mXparser/docs/ai/tasks/bug-fixes-620-review-20261114/evidence-java-20261114T005559Z-f782523f/test-summary.json).
- csharp: `1876395f2454957a90093afbf1ee4ad6c2cbe84f6ea2e2d5b98c0f82afcf3408`; [evidence-csharp-20261114T010200Z-465ea14e/test-summary.json](D:/Codex/MathParser.org-mXparser/docs/ai/tasks/bug-fixes-620-review-20261114/evidence-csharp-20261114T010200Z-465ea14e/test-summary.json).

Obecna migawka całego inwentarza źródeł/testów/build: `5694c6d80df9c6dde9bab9ba55f0192443784b112d5089985ee8eae634c7ac62`,411plików. Jest oznaczona **unvalidated**; zawiera również pozostawione pliki z niezależnej pracy użytkownika. Nie zapisano dla niej sztucznego Gate PASS.

Artefakty `javascript/dist` odświeżone z nowych wyników budowania. Poprzednia wersja: `D:\Codex\MathParser.org-mXparser\CURRENT\.bug-review-20261114\previous-javascript-dist-20261114T013109324173Z`. Źródła bindingu, façade, typy i katalog API pozostają bez zmian; cała matematyka pochodzi z aktualnego `cpp/lib`.

## 8. Zachowanie pracy użytkownika i dowodów

W trakcie walidacji w inwentarzu stały się widoczne ignorowane katalogi `syntaxchecker-generated`. Zawierały starsze kopie z tymi samymi nazwami klas. Po ich tymczasowym odseparowaniu użytkownik wyjaśnił, że prowadzi niezależną pracę, i zwolnił z ponownej walidacji. **Wszystkie39plików przywrócono na pierwotne miejsca; każdy hash identyczny.** Nie edytowano ani nie regenerowano właściwych parserów syntaxchecker. Nie usuwano cudzych plików.

Istniejące testy, oczekiwania, fixture, konfiguracje i progi: niezmienione względem początku tej partii (119chronionych plików). Oba oryginalne raporty audytu zachowane. Zachowano także wcześniejsze java/target, które użytkownik wskazał jako wyniki kompilacji Claude, przed pierwszym Maven clean.

Pierwszy build C# zakończył się CS0136 wskutek różnicy reguł nazw lokalnych; poprawiono wyłącznie port, potem pełne testy przeszły. Późniejsze stare programy diagnostyczne C# zgłosiły duplikaty deklaracji z kopii generatora; po odseparowaniu kopii ten sam legacy probe przeszedł2870asercji. Logów tych prób nie usuwano. Żadna taka próba nie została nazwana udanym testem.

## 9. Rekordy i gotowość

- [STATE.md](D:/Codex/MathParser.org-mXparser/docs/ai/tasks/bug-fixes-620-review-20261114/STATE.md)
- [PORTING-REVIEW.md](D:/Codex/MathParser.org-mXparser/docs/ai/tasks/bug-fixes-620-review-20261114/PORTING-REVIEW.md)
- [ISSUES.md](D:/Codex/MathParser.org-mXparser/docs/ai/tasks/bug-fixes-620-review-20261114/ISSUES.md)
- [GATES.json](D:/Codex/MathParser.org-mXparser/docs/ai/tasks/bug-fixes-620-review-20261114/GATES.json)
- [current-unvalidated-source-snapshot.json](D:/Codex/MathParser.org-mXparser/docs/ai/tasks/bug-fixes-620-review-20261114/current-unvalidated-source-snapshot.json)
- [Sprawdzenie zachowania plików i EOF](D:/Codex/MathParser.org-mXparser/CURRENT/.bug-review-20261114/final-integrity.json)
- [Odtworzenie39plików użytkownika](D:/Codex/MathParser.org-mXparser/CURRENT/.bug-review-20261114/generated-restored.json)
- [1427referencji i wyniki przed/po](D:/Codex/MathParser.org-mXparser/CURRENT/.bug-review-20261114/reference-grid.json)

Poprawki są pozostawione w drzewie roboczym do przeglądu. Zakres po review jest domknięty zgodnie z decyzją o niewykonywaniu dalszych walidacji. R3 oraz konwencje R5/R7 pozostają jawnie opisane. Formalna walidacja pochodzenia JS nadal wymaga osobno dozwolonej aktualizacji niezmienialnego binding-origin.json; podpisywany build .NET nadal nie ma nowego potwierdzenia wymaganego PFX. Nie deklaruję pełnej gotowości wydania ani świeżego przejścia wszystkich bramek.
