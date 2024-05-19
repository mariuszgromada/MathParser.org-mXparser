SET MXPARSER=MathParser.org-mXparser
SET VER=v.6.0.0
SET JAVAC="%JDK_HOME%\bin\javac"
SET JAR="%JDK_HOME%\bin\jar"
SET MANIFEST=%ROOT_PATH%\Manifest.txt
SET SRC_ROOT_PATH=%ROOT_PATH%\src
SET BIN_ROOT_PATH=%MXPARSER_ROOT_PATH%\MathParser.org-mXparser-bin

rmdir /S /Q %BIN_ROOT_PATH%\class_jdk%JDK_VER%
rmdir /S /Q %BIN_ROOT_PATH%\jdk%JDK_VER%
mkdir %BIN_ROOT_PATH%\class_jdk%JDK_VER%
mkdir %BIN_ROOT_PATH%\jdk%JDK_VER%
%JAVAC% -encoding utf8 -d %BIN_ROOT_PATH%\class_jdk%JDK_VER% %SRC_ROOT_PATH%\org\mariuszgromada\math\mxparser\*.java %SRC_ROOT_PATH%\org\mariuszgromada\math\mxparser\mathcollection\*.java %SRC_ROOT_PATH%\org\mariuszgromada\math\mxparser\parsertokens\*.java %SRC_ROOT_PATH%\org\mariuszgromada\math\mxparser\syntaxchecker\*.java
%JAR% cvmf %MANIFEST% %BIN_ROOT_PATH%\jdk%JDK_VER%\%MXPARSER%.jar -C %BIN_ROOT_PATH%\class_jdk%JDK_VER% .