%ROOT_PATH%\jar-build-var-set.bat

rmdir /S /Q %BIN_ROOT_PATH%\jdk.%JDK_VER%
mkdir %BIN_ROOT_PATH%\jdk.%JDK_VER%
%JAVAC% -encoding utf8 -d %BIN_ROOT_PATH%\jdk.%JDK_VER% %SRC_ROOT_PATH%\org\mariuszgromada\math\mxparser\*.java %SRC_ROOT_PATH%\org\mariuszgromada\math\mxparser\mathcollection\*.java %SRC_ROOT_PATH%\org\mariuszgromada\math\mxparser\parsertokens\*.java %SRC_ROOT_PATH%\org\mariuszgromada\math\mxparser\regressiontesting\*.java %SRC_ROOT_PATH%\org\mariuszgromada\math\mxparser\syntaxchecker\*.java
%JAR% cvmf %MANIFEST% %BIN_ROOT_PATH%\%MXPARSER_VER%-jdk.%JDK_VER%.jar -C %BIN_ROOT_PATH%\jdk.%JDK_VER% .