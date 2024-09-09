cmake_minimum_required(VERSION 3.22)
project(MathParserOrgMXparser VERSION 6.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_EXTENSIONS OFF)

# =========================================
# Add Cereal ===
set(SKIP_PERFORMANCE_COMPARISON ON)
include(FetchContent)
FetchContent_Declare(
	cereal
	GIT_REPOSITORY https://github.com/USCiLab/cereal.git
	GIT_TAG v1.3.2
)
FetchContent_MakeAvailable(cereal)
# === Add Cereal
# =========================================

message(STATUS "==============================================================")
message(STATUS "MSVC: ${MSVC}")
message(STATUS "CMAKE_CXX_COMPILER_ID: ${CMAKE_CXX_COMPILER_ID}")
message(STATUS "CMAKE_CXX_COMPILER: ${CMAKE_CXX_COMPILER}")
message(STATUS "CMAKE_CXX_COMPILER_VERSION: ${CMAKE_CXX_COMPILER_VERSION}")
message(STATUS "CMAKE_SYSTEM_NAME: ${CMAKE_SYSTEM_NAME}")
message(STATUS "CMAKE_SYSTEM_VERSION: ${CMAKE_SYSTEM_VERSION}")
message(STATUS "CMAKE_HOST_SYSTEM_NAME: ${CMAKE_HOST_SYSTEM_NAME}")
message(STATUS "CMAKE_SYSTEM_PROCESSOR: ${CMAKE_SYSTEM_PROCESSOR}")
message(STATUS "CMAKE_SIZEOF_VOID_P: ${CMAKE_SIZEOF_VOID_P}")
message(STATUS "CMAKE_BUILD_TYPE: ${CMAKE_BUILD_TYPE}")
message(STATUS "CMAKE_MAKE_PROGRAM: ${CMAKE_MAKE_PROGRAM}")
message(STATUS "CMAKE_COMMAND: ${CMAKE_COMMAND}")
message(STATUS "CMAKE_GENERATOR: ${CMAKE_GENERATOR}")
message(STATUS "CMAKE_GENERATOR_PLATFORM: ${CMAKE_GENERATOR_PLATFORM}")
message(STATUS "CMAKE_GENERATOR_INSTANCE: ${CMAKE_GENERATOR_INSTANCE}")
message(STATUS "CMAKE_CXX_COMPILER_FRONTEND_VARIANT: ${CMAKE_CXX_COMPILER_FRONTEND_VARIANT}")
message(STATUS "CMAKE_CXX_COMPILER_LINKER: ${CMAKE_CXX_COMPILER_LINKER}")
message(STATUS "CMAKE_CXX_COMPILER_AR: ${CMAKE_CXX_COMPILER_AR}")
message(STATUS "CMAKE_CXX_COMPILER_LINKER: ${CMAKE_CXX_COMPILER_LINKER}")
message(STATUS "CMAKE_CXX_COMPILER_LINKER_FRONTEND_VARIANT: ${CMAKE_CXX_COMPILER_LINKER_FRONTEND_VARIANT}")
message(STATUS "CMAKE_CXX_COMPILER_LINKER_ID: ${CMAKE_CXX_COMPILER_LINKER_ID}")
message(STATUS "CMAKE_CXX_COMPILER_LINKER_VERSION: ${CMAKE_CXX_COMPILER_LINKER_VERSION}")
message(STATUS "CMAKE_CXX_COMPILER_RANLIB: ${CMAKE_CXX_COMPILER_RANLIB}")
message(STATUS "CMAKE_CXX_LINK_LIBRARY_SUFFIX: ${CMAKE_CXX_LINK_LIBRARY_SUFFIX}")
message(STATUS "CMAKE_MAJOR_VERSION: ${CMAKE_MAJOR_VERSION}")
message(STATUS "CMAKE_MINOR_VERSION: ${CMAKE_MINOR_VERSION}")
message(STATUS "CMAKE_PATCH_VERSION: ${CMAKE_PATCH_VERSION}")
message(STATUS "CMAKE_MAKE_PROGRAM: ${CMAKE_MAKE_PROGRAM}")
message(STATUS "PROJECT_VERSION: ${PROJECT_VERSION}")
message(STATUS "PROJECT_VERSION_MAJOR: ${PROJECT_VERSION_MAJOR}")
message(STATUS "PROJECT_VERSION_MINOR: ${PROJECT_VERSION_MINOR}")
message(STATUS "PROJECT_VERSION_PATCH: ${PROJECT_VERSION_PATCH}")
message(STATUS "CMAKE_TOOLCHAIN_FILE: ${CMAKE_TOOLCHAIN_FILE}")
message(STATUS "CMAKE_VS_PLATFORM_NAME: ${CMAKE_VS_PLATFORM_NAME}")
message(STATUS "CMAKE_BINARY_DIR: ${CMAKE_BINARY_DIR}")
message(STATUS "CMAKE_MODULE_PATH: ${CMAKE_MODULE_PATH}")
message(STATUS "==============================================================")


# =========================================
# Recognizing compiler/variants
set(COMP_CLANG OFF)
set(COMP_CLANG_CL OFF)
set(ENV_SPECIFIC_CONFIG_1 "")
set(ENV_SPECIFIC_CONFIG_2 "")
set(ENV_SPECIFIC_CONFIG_3 "")
set(ENV_SPECIFIC_CONFIG_4 "")
set(CMAKE_MSVC "No")

if (CMAKE_CXX_COMPILER_ID MATCHES "Clang")
	if (MSVC)
		message(STATUS "Compiler: Clang-cl")
		set(ENV_SPECIFIC_CONFIG_1 "Clang-cl")
		set(COMP_CLANG_CL ON)
	else()
		message(STATUS "Compiler: Clang")
		set(COMP_CLANG ON)
	endif()
endif()

if (MSVC)
	set(CMAKE_MSVC "Yes")
endif()

if (CMAKE_CXX_COMPILER_ID MATCHES "MSVC")
	message(STATUS "Compiler: MSVC")
	set(COMP_CL ON)
else()
	set(COMP_CL OFF)
endif()

if (CMAKE_CXX_COMPILER_ID MATCHES "GNU")
	message(STATUS "Compiler: GCC")
	set(COMP_GCC ON)
else()
	set(COMP_GCC OFF)
endif()

if (CMAKE_CXX_COMPILER MATCHES "msys|MSYS")
	message(STATUS "Compiler inside the MSYS environment.")
	set(ENV_SPECIFIC_CONFIG_2 "MSYS")
	set(ENV_MSYS ON)
else()
	set(ENV_MSYS OFF)
endif()

if (CMAKE_SYSTEM_VERSION MATCHES "WSL|wsl")
	message(STATUS "Compiler inside the WSL environment.")
	set(ENV_SPECIFIC_CONFIG_3 "WSL")
	set(ENV_WSL ON)
else()
	set(ENV_WSL OFF)
endif()

if (CMAKE_CXX_COMPILER MATCHES "mingw|MINGW|MinGW")
	message(STATUS "Compiler inside the MinGW environment.")
	set(ENV_SPECIFIC_CONFIG_4 "MinGW")
	set(ENV_MINGW ON)
else()
	set(ENV_MINGW OFF)
endif()

if (NOT COMP_CLANG_CL AND NOT COMP_CLANG AND NOT COMP_CL AND NOT COMP_GCC)
	message(STATUS "Compiler: Unrecognized")
	set(COMP_OTHER ON)
else ()
	set(COMP_OTHER OFF)
endif()

# =========================================
# Recognizing CPU architecture

if (CMAKE_SYSTEM_PROCESSOR MATCHES "x86|X86|AMD|amd|i[3-6]86|I[3-6]86")
	message(STATUS "CPU Architecture: x86")
	set(ARCH_X86 ON)
else()
	set(ARCH_X86 OFF)
endif()

if (CMAKE_SYSTEM_PROCESSOR MATCHES "arm|ARM|aarch|AARCH")
	message(STATUS "CPU Architecture: ARM")
	set(ARCH_ARM ON)
else()
	set(ARCH_ARM OFF)
endif()

if (CMAKE_SYSTEM_PROCESSOR MATCHES "64")
	message(STATUS "CPU Architecture: 64 bit")
	set(ARCH_64_BIT ON)
else()
	set(ARCH_64_BIT OFF)
endif()

if (CMAKE_SIZEOF_VOID_P EQUAL 8)
	message(STATUS "Target Architecture: 64 bit")
	set(ARCH_64_BIT_TARGET ON)
else()
	set(ARCH_64_BIT_TARGET OFF)
endif()

if (CMAKE_SIZEOF_VOID_P EQUAL 4)
	message(STATUS "Target Architecture: 32 bit")
	set(ARCH_32_BIT_TARGET ON)
else()
	set(ARCH_32_BIT_TARGET OFF)
endif()

# =========================================
# Recognizing OS

if (CMAKE_SYSTEM_NAME MATCHES "Windows")
	message(STATUS "Target OS: Windows")
	set(TARGET_WINDOWS ON)
else()
	set(TARGET_WINDOWS OFF)
endif()

if (CMAKE_SYSTEM_NAME MATCHES "Linux")
	message(STATUS "Target OS: Linux")
	set(TARGET_LINUX ON)
else()
	set(TARGET_LINUX OFF)
endif()

if (CMAKE_SYSTEM_NAME MATCHES "Android")
	message(STATUS "Target OS: Android")
	set(TARGET_ANDROID ON)
else()
	set(TARGET_ANDROID OFF)
endif()

if (CMAKE_SYSTEM_NAME MATCHES "Darwin")
	message(STATUS "Target OS: macOS")
	set(TARGET_MACOS ON)
else()
	set(TARGET_MACOS OFF)
endif()

if (CMAKE_SYSTEM_NAME MATCHES "iOS")
	message(STATUS "Target OS: iOS")
	set(TARGET_IOS ON)
else()
	set(TARGET_IOS OFF)
endif()

if (CMAKE_HOST_SYSTEM_NAME MATCHES "Windows")
	message(STATUS "Host OS: Windows")
	set(HOST_WINDOWS ON)
else()
	set(HOST_WINDOWS OFF)
endif()

if (CMAKE_HOST_SYSTEM_NAME MATCHES "Linux")
	message(STATUS "Host OS: Linux")
	set(HOST_LINUX ON)
else()
	set(HOST_LINUX OFF)
endif()

if (CMAKE_HOST_SYSTEM_NAME MATCHES "Android")
	message(STATUS "Host OS: Android")
	set(HOST_ANDROID ON)
else()
	set(HOST_ANDROID OFF)
endif()

if (CMAKE_HOST_SYSTEM_NAME MATCHES "Darwin")
	message(STATUS "Host OS: macOS")
	set(HOST_MACOS ON)
else()
	set(HOST_MACOS OFF)
endif()

if (CMAKE_HOST_SYSTEM_NAME MATCHES "iOS")
	message(STATUS "Host OS: iOS")
	set(HOST_IOS ON)
else()
	set(HOST_IOS OFF)
endif()

message(STATUS "COMP_CLANG: ${COMP_CLANG}")
message(STATUS "COMP_GCC: ${COMP_GCC}")
message(STATUS "COMP_CL: ${COMP_CL}")
message(STATUS "COMP_CLANG_CL: ${COMP_CLANG_CL}")
message(STATUS "COMP_OTHER: ${COMP_OTHER}")
message(STATUS "ENV_MSYS: ${ENV_MSYS}")
message(STATUS "ENV_WSL: ${ENV_WSL}")
message(STATUS "ENV_MINGW: ${ENV_MINWG}")
message(STATUS "ARCH_64_BIT: ${ARCH_64_BIT}")
message(STATUS "ARCH_32_BIT: ${ARCH_32_BIT}")
message(STATUS "ARCH_X86: ${ARCH_X86}")
message(STATUS "ARCH_ARM: ${ARCH_ARM}")
message(STATUS "TARGET_WINDOWS: ${TARGET_WINDOWS}")
message(STATUS "TARGET_LINUX: ${TARGET_LINUX}")
message(STATUS "TARGET_ANDROID: ${TARGET_ANDROID}")
message(STATUS "TARGET_MACOS: ${TARGET_MACOS}")
message(STATUS "TARGET_IOS: ${TARGET_IOS}")


# Source encoding UTF-8
if (COMP_CL OR COMP_CLANG_CL)
	add_compile_options(/utf-8)
endif()

if (COMP_GCC OR COMP_CLANG)
	add_compile_options(-finput-charset=UTF-8)
endif()

# Exceptions handling in case of MSVC
if (COMP_CL OR COMP_CLANG_CL)
	add_compile_options(/EHsc)
endif()

# Long double
if (COMP_CLANG OR COMP_GCC)
	if (NOT ARCH_ARM)
		add_compile_options(-mlong-double-80)
	endif()
endif()

# Silence note: parameter passing for argument of type std::initializer_list changed in GCC 7.1
if (COMP_GCC)
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wno-psabi")
endif()


# =========================================

if (NOT TARGET MathParserOrgMXparser)
add_library(MathParserOrgMXparser SHARED
		src/org/mariuszgromada/math/mxparser.hpp
		src/org/mariuszgromada/math/mxparser/aliases/AliasesFunctionsStd.hpp
		src/org/mariuszgromada/math/mxparser/aliases/AliasesTypesStd.hpp
		src/org/mariuszgromada/math/mxparser/aliases/AliasesTypesUser.hpp
		src/org/mariuszgromada/math/mxparser/Argument.cpp
		src/org/mariuszgromada/math/mxparser/Argument.hpp
		src/org/mariuszgromada/math/mxparser/ArgumentExtension.hpp
		src/org/mariuszgromada/math/mxparser/CalcStepRecord.cpp
		src/org/mariuszgromada/math/mxparser/CalcStepRecord.hpp
		src/org/mariuszgromada/math/mxparser/CalcStepsRegister.cpp
		src/org/mariuszgromada/math/mxparser/CalcStepsRegister.hpp
		src/org/mariuszgromada/math/mxparser/CloneCache.cpp
		src/org/mariuszgromada/math/mxparser/CloneCache.hpp
		src/org/mariuszgromada/math/mxparser/Constant.cpp
		src/org/mariuszgromada/math/mxparser/Constant.hpp
		src/org/mariuszgromada/math/mxparser/Expression.hpp
		src/org/mariuszgromada/math/mxparser/ExpressionA.cpp
		src/org/mariuszgromada/math/mxparser/ExpressionB.cpp
		src/org/mariuszgromada/math/mxparser/ExpressionUtils.cpp
		src/org/mariuszgromada/math/mxparser/ExpressionUtils.hpp
		src/org/mariuszgromada/math/mxparser/Function.cpp
		src/org/mariuszgromada/math/mxparser/Function.hpp
		src/org/mariuszgromada/math/mxparser/FunctionExtension.hpp
		src/org/mariuszgromada/math/mxparser/FunctionExtensionVariadic.hpp
		src/org/mariuszgromada/math/mxparser/License.cpp
		src/org/mariuszgromada/math/mxparser/License.hpp
		src/org/mariuszgromada/math/mxparser/macro/MacroBuild.hpp
		src/org/mariuszgromada/math/mxparser/macro/MacroCast.hpp
		src/org/mariuszgromada/math/mxparser/macro/MacroFriends.hpp
		src/org/mariuszgromada/math/mxparser/macro/MacroMemory.hpp
		src/org/mariuszgromada/math/mxparser/macro/MacroSerialization.hpp
		src/org/mariuszgromada/math/mxparser/macro/MacroStaticVarsInit.hpp
		src/org/mariuszgromada/math/mxparser/macro/MacroString.hpp
		src/org/mariuszgromada/math/mxparser/macro/MacroString.hpp
		src/org/mariuszgromada/math/mxparser/macro/MacroVarArgs.hpp
		src/org/mariuszgromada/math/mxparser/mathcollection/AstronomicalConstants.hpp
		src/org/mariuszgromada/math/mxparser/mathcollection/BinaryRelations.cpp
		src/org/mariuszgromada/math/mxparser/mathcollection/BinaryRelations.hpp
		src/org/mariuszgromada/math/mxparser/mathcollection/BooleanAlgebra.cpp
		src/org/mariuszgromada/math/mxparser/mathcollection/BooleanAlgebra.hpp
		src/org/mariuszgromada/math/mxparser/mathcollection/Calculus.cpp
		src/org/mariuszgromada/math/mxparser/mathcollection/Calculus.hpp
		src/org/mariuszgromada/math/mxparser/mathcollection/Coefficients.cpp
		src/org/mariuszgromada/math/mxparser/mathcollection/Coefficients.hpp
		src/org/mariuszgromada/math/mxparser/mathcollection/Evaluate.cpp
		src/org/mariuszgromada/math/mxparser/mathcollection/Evaluate.hpp
		src/org/mariuszgromada/math/mxparser/mathcollection/IRandom.hpp
		src/org/mariuszgromada/math/mxparser/mathcollection/MathConstants.cpp
		src/org/mariuszgromada/math/mxparser/mathcollection/MathConstants.hpp
		src/org/mariuszgromada/math/mxparser/mathcollection/MathFunctions.cpp
		src/org/mariuszgromada/math/mxparser/mathcollection/MathFunctions.hpp
		src/org/mariuszgromada/math/mxparser/mathcollection/NumberTheory.cpp
		src/org/mariuszgromada/math/mxparser/mathcollection/NumberTheory.hpp
		src/org/mariuszgromada/math/mxparser/mathcollection/PhysicalConstants.hpp
		src/org/mariuszgromada/math/mxparser/mathcollection/PrimesCache.cpp
		src/org/mariuszgromada/math/mxparser/mathcollection/PrimesCache.hpp
		src/org/mariuszgromada/math/mxparser/mathcollection/ProbabilityDistributions.cpp
		src/org/mariuszgromada/math/mxparser/mathcollection/ProbabilityDistributions.hpp
		src/org/mariuszgromada/math/mxparser/mathcollection/SpecialFunctions.cpp
		src/org/mariuszgromada/math/mxparser/mathcollection/SpecialFunctions.hpp
		src/org/mariuszgromada/math/mxparser/mathcollection/SpecialValue.cpp
		src/org/mariuszgromada/math/mxparser/mathcollection/SpecialValue.hpp
		src/org/mariuszgromada/math/mxparser/mathcollection/SpecialValueTrigonometric.cpp
		src/org/mariuszgromada/math/mxparser/mathcollection/SpecialValueTrigonometric.hpp
		src/org/mariuszgromada/math/mxparser/mathcollection/Statistics.cpp
		src/org/mariuszgromada/math/mxparser/mathcollection/Statistics.hpp
		src/org/mariuszgromada/math/mxparser/mathcollection/Units.cpp
		src/org/mariuszgromada/math/mxparser/mathcollection/Units.hpp
		src/org/mariuszgromada/math/mxparser/Miscellaneous.cpp
		src/org/mariuszgromada/math/mxparser/Miscellaneous.hpp
		src/org/mariuszgromada/math/mxparser/mXparser.cpp
		src/org/mariuszgromada/math/mxparser/mXparser.hpp
		src/org/mariuszgromada/math/mxparser/parsertokens/BinaryRelation.cpp
		src/org/mariuszgromada/math/mxparser/parsertokens/BinaryRelation.hpp
		src/org/mariuszgromada/math/mxparser/parsertokens/BitwiseOperator.cpp
		src/org/mariuszgromada/math/mxparser/parsertokens/BitwiseOperator.hpp
		src/org/mariuszgromada/math/mxparser/parsertokens/BooleanOperator.cpp
		src/org/mariuszgromada/math/mxparser/parsertokens/BooleanOperator.hpp
		src/org/mariuszgromada/math/mxparser/parsertokens/CalculusOperator.cpp
		src/org/mariuszgromada/math/mxparser/parsertokens/CalculusOperator.hpp
		src/org/mariuszgromada/math/mxparser/parsertokens/ConstantValue.cpp
		src/org/mariuszgromada/math/mxparser/parsertokens/ConstantValue.hpp
		src/org/mariuszgromada/math/mxparser/parsertokens/Function1Arg.cpp
		src/org/mariuszgromada/math/mxparser/parsertokens/Function1Arg.hpp
		src/org/mariuszgromada/math/mxparser/parsertokens/Function2Arg.cpp
		src/org/mariuszgromada/math/mxparser/parsertokens/Function2Arg.hpp
		src/org/mariuszgromada/math/mxparser/parsertokens/Function3Arg.cpp
		src/org/mariuszgromada/math/mxparser/parsertokens/Function3Arg.hpp
		src/org/mariuszgromada/math/mxparser/parsertokens/FunctionVariadic.cpp
		src/org/mariuszgromada/math/mxparser/parsertokens/FunctionVariadic.hpp
		src/org/mariuszgromada/math/mxparser/parsertokens/KeyWord.cpp
		src/org/mariuszgromada/math/mxparser/parsertokens/KeyWord.hpp
		src/org/mariuszgromada/math/mxparser/parsertokens/Operator.cpp
		src/org/mariuszgromada/math/mxparser/parsertokens/Operator.hpp
		src/org/mariuszgromada/math/mxparser/parsertokens/ParserSymbol.cpp
		src/org/mariuszgromada/math/mxparser/parsertokens/ParserSymbol.hpp
		src/org/mariuszgromada/math/mxparser/parsertokens/RandomVariable.cpp
		src/org/mariuszgromada/math/mxparser/parsertokens/RandomVariable.hpp
		src/org/mariuszgromada/math/mxparser/parsertokens/SyntaxStringBuilder.cpp
		src/org/mariuszgromada/math/mxparser/parsertokens/SyntaxStringBuilder.hpp
		src/org/mariuszgromada/math/mxparser/parsertokens/Token.cpp
		src/org/mariuszgromada/math/mxparser/parsertokens/Token.hpp
		src/org/mariuszgromada/math/mxparser/parsertokens/Unit.cpp
		src/org/mariuszgromada/math/mxparser/parsertokens/Unit.hpp
		src/org/mariuszgromada/math/mxparser/PrimitiveElement.cpp
		src/org/mariuszgromada/math/mxparser/PrimitiveElement.hpp
		src/org/mariuszgromada/math/mxparser/RecursiveArgument.cpp
		src/org/mariuszgromada/math/mxparser/RecursiveArgument.hpp
		src/org/mariuszgromada/math/mxparser/SerializationUtils.cpp
		src/org/mariuszgromada/math/mxparser/SerializationUtils.hpp
		src/org/mariuszgromada/math/mxparser/StringInvariant.cpp
		src/org/mariuszgromada/math/mxparser/StringInvariant.hpp
		src/org/mariuszgromada/math/mxparser/StringModel.cpp
		src/org/mariuszgromada/math/mxparser/StringModel.hpp
		src/org/mariuszgromada/math/mxparser/StringResources.cpp
		src/org/mariuszgromada/math/mxparser/StringResources.hpp
		src/org/mariuszgromada/math/mxparser/StringResourcesFrench.cpp
		src/org/mariuszgromada/math/mxparser/StringResourcesFrench.hpp
		src/org/mariuszgromada/math/mxparser/StringResourcesGerman.cpp
		src/org/mariuszgromada/math/mxparser/StringResourcesGerman.hpp
		src/org/mariuszgromada/math/mxparser/StringResourcesItalian.cpp
		src/org/mariuszgromada/math/mxparser/StringResourcesItalian.hpp
		src/org/mariuszgromada/math/mxparser/StringResourcesPolish.cpp
		src/org/mariuszgromada/math/mxparser/StringResourcesPolish.hpp
		src/org/mariuszgromada/math/mxparser/StringResourcesPortuguese.cpp
		src/org/mariuszgromada/math/mxparser/StringResourcesPortuguese.hpp
		src/org/mariuszgromada/math/mxparser/StringResourcesSpanish.cpp
		src/org/mariuszgromada/math/mxparser/StringResourcesSpanish.hpp
		src/org/mariuszgromada/math/mxparser/StringUtils.cpp
		src/org/mariuszgromada/math/mxparser/StringUtils.hpp
		src/org/mariuszgromada/math/mxparser/syntaxchecker/CharStream.cpp
		src/org/mariuszgromada/math/mxparser/syntaxchecker/CharStream.hpp
		src/org/mariuszgromada/math/mxparser/syntaxchecker/ErrorHandler.cpp
		src/org/mariuszgromada/math/mxparser/syntaxchecker/ErrorHandler.hpp
		src/org/mariuszgromada/math/mxparser/syntaxchecker/ErrorMessage.cpp
		src/org/mariuszgromada/math/mxparser/syntaxchecker/ErrorMessage.hpp
		src/org/mariuszgromada/math/mxparser/syntaxchecker/JavaCC.hpp
		src/org/mariuszgromada/math/mxparser/syntaxchecker/JavaCCToken.cpp
		src/org/mariuszgromada/math/mxparser/syntaxchecker/JavaCCToken.hpp
		src/org/mariuszgromada/math/mxparser/syntaxchecker/ParseException.cpp
		src/org/mariuszgromada/math/mxparser/syntaxchecker/ParseException.hpp
		src/org/mariuszgromada/math/mxparser/syntaxchecker/SyntaxChecker.cpp
		src/org/mariuszgromada/math/mxparser/syntaxchecker/SyntaxChecker.hpp
		src/org/mariuszgromada/math/mxparser/syntaxchecker/SyntaxCheckerConstants.hpp
		src/org/mariuszgromada/math/mxparser/syntaxchecker/SyntaxCheckerTokenManager.cpp
		src/org/mariuszgromada/math/mxparser/syntaxchecker/SyntaxCheckerTokenManager.hpp
		src/org/mariuszgromada/math/mxparser/syntaxchecker/TokenManager.hpp
		src/org/mariuszgromada/math/mxparser/syntaxchecker/TokenMgrError.cpp
		src/org/mariuszgromada/math/mxparser/syntaxchecker/TokenMgrError.hpp
		src/org/mariuszgromada/math/mxparser/Tutorial.cpp
		src/org/mariuszgromada/math/mxparser/Tutorial.hpp
		src/org/mariuszgromada/math/mxparser/wrapper/Array.hpp
		src/org/mariuszgromada/math/mxparser/wrapper/BigDecimal.cpp
		src/org/mariuszgromada/math/mxparser/wrapper/BigDecimal.hpp
		src/org/mariuszgromada/math/mxparser/wrapper/Double.cpp
		src/org/mariuszgromada/math/mxparser/wrapper/Double.hpp
		src/org/mariuszgromada/math/mxparser/wrapper/Integer.cpp
		src/org/mariuszgromada/math/mxparser/wrapper/Integer.hpp
		src/org/mariuszgromada/math/mxparser/wrapper/List.cpp
		src/org/mariuszgromada/math/mxparser/wrapper/List.hpp
		src/org/mariuszgromada/math/mxparser/wrapper/Math.hpp
		src/org/mariuszgromada/math/mxparser/wrapper/PtrsMap.hpp
		src/org/mariuszgromada/math/mxparser/wrapper/PtrsSet.hpp
		src/org/mariuszgromada/math/mxparser/wrapper/Random.cpp
		src/org/mariuszgromada/math/mxparser/wrapper/Random.hpp
		src/org/mariuszgromada/math/mxparser/wrapper/StringBuilder.cpp
		src/org/mariuszgromada/math/mxparser/wrapper/StringBuilder.hpp
		src/org/mariuszgromada/math/mxparser/wrapper/SystemUtils.cpp
		src/org/mariuszgromada/math/mxparser/wrapper/SystemUtils.hpp
		src/org/mariuszgromada/math/mxparser/wrapper/VariadicProcessor.cpp
		src/org/mariuszgromada/math/mxparser/wrapper/VariadicProcessor.hpp
)
endif()


set(CMAKE_ENV_SPECIFIC_CONFIG "${ENV_SPECIFIC_CONFIG_1}${ENV_SPECIFIC_CONFIG_2}${ENV_SPECIFIC_CONFIG_3}${ENV_SPECIFIC_CONFIG_4}")




target_compile_definitions(MathParserOrgMXparser PUBLIC
		MXPARSER_BUILD_PROJECT_VERSION_MAJOR=${PROJECT_VERSION_MAJOR}
		MXPARSER_BUILD_PROJECT_VERSION_MINOR=${PROJECT_VERSION_MINOR}
		MXPARSER_BUILD_PROJECT_VERSION_PATCH=${PROJECT_VERSION_PATCH}
		MXPARSER_BUILD_CMAKE_HOST_SYSTEM_NAME="${CMAKE_HOST_SYSTEM_NAME}"
		MXPARSER_BUILD_CMAKE_SYSTEM_NAME="${CMAKE_SYSTEM_NAME}"
		MXPARSER_BUILD_CMAKE_SYSTEM_VERSION="${CMAKE_SYSTEM_VERSION}"
		MXPARSER_BUILD_CMAKE_SYSTEM_PROCESSOR="${CMAKE_SYSTEM_PROCESSOR}"
		MXPARSER_BUILD_CMAKE_CXX_COMPILER_ID="${CMAKE_CXX_COMPILER_ID}"
		MXPARSER_BUILD_CMAKE_ENV_SPECIFIC_CONFIG="${CMAKE_ENV_SPECIFIC_CONFIG}"
		MXPARSER_BUILD_CMAKE_CXX_COMPILER_VERSION="${CMAKE_CXX_COMPILER_VERSION}"
		MXPARSER_BUILD_CMAKE_CXX_COMPILER="${CMAKE_CXX_COMPILER}"
		MXPARSER_BUILD_CMAKE_CXX_COMPILER_FRONTEND_VARIANT="${CMAKE_CXX_COMPILER_FRONTEND_VARIANT}"
		MXPARSER_BUILD_CMAKE_CXX_COMPILER_LINKER_FRONTEND_VARIANT="${CMAKE_CXX_COMPILER_LINKER_FRONTEND_VARIANT}"
		MXPARSER_BUILD_CMAKE_CXX_COMPILER_LINKER_ID="${CMAKE_CXX_COMPILER_LINKER_ID}"
		MXPARSER_BUILD_CMAKE_CXX_COMPILER_LINKER_VERSION="${CMAKE_CXX_COMPILER_LINKER_VERSION}"
		MXPARSER_BUILD_CMAKE_CXX_COMPILER_LINKER="${CMAKE_CXX_COMPILER_LINKER}"
		MXPARSER_BUILD_CMAKE_MSVC="${CMAKE_MSVC}"
		MXPARSER_BUILD_CMAKE_BUILD_TYPE="${CMAKE_BUILD_TYPE}"
		MXPARSER_BUILD_CMAKE_GENERATOR="${CMAKE_GENERATOR}"
		MXPARSER_BUILD_CMAKE_VERSION="${DETECTED_CMAKE_MAJOR_VERSION}.${DETECTED_CMAKE_MINOR_VERSION}.${DETECTED_CMAKE_PATCH_VERSION}"
		MXPARSER_BUILD_CMAKE_MAKE_PROGRAM="${CMAKE_MAKE_PROGRAM}"
		MXPARSER_BUILD_PROJECT_VERSION="${PROJECT_VERSION}"
		MXPARSER_BUILD_CMAKE_SIZEOF_VOID_P="${CMAKE_SIZEOF_VOID_P}"
		MXPARSER_BUILD_CMAKE_CXX_FLAGS_RELEASE="${CMAKE_CXX_FLAGS_RELEASE}"
)

target_include_directories(MathParserOrgMXparser PUBLIC
		${CMAKE_SOURCE_DIR}/src
		${CMAKE_SOURCE_DIR}/lib/src
)

message(STATUS "CMAKE_SOURCE_DIR/src: ${CMAKE_SOURCE_DIR}/src")
message(STATUS "CMAKE_SOURCE_DIR/lib/src: ${CMAKE_SOURCE_DIR}/lib/src")

target_compile_definitions(MathParserOrgMXparser PRIVATE BUILDING_MATHPARSER_ORG_MXPARSER_LIBRARY)

if (COMP_CL)
	target_compile_definitions(MathParserOrgMXparser PRIVATE MXPARSER_BUILD_COMP_CL)
endif()
if (COMP_CLANG_CL)
	target_compile_definitions(MathParserOrgMXparser PRIVATE MXPARSER_BUILD_COMP_CLANG_CL)
endif()
if (COMP_CLANG)
	target_compile_definitions(MathParserOrgMXparser PRIVATE MXPARSER_BUILD_COMP_CLANG)
endif()
if (COMP_GCC)
	target_compile_definitions(MathParserOrgMXparser PRIVATE MXPARSER_BUILD_COMP_GCC)
endif()
if (COMP_OTHER)
	target_compile_definitions(MathParserOrgMXparser PRIVATE MXPARSER_BUILD_COMP_OTHER)
endif()
if (ENV_MSYS)
	target_compile_definitions(MathParserOrgMXparser PRIVATE MXPARSER_BUILD_ENV_MSYS)
endif()
if (ENV_WSL)
	target_compile_definitions(MathParserOrgMXparser PRIVATE MXPARSER_BUILD_ENV_WSL)
endif()
if (ENV_MINGW)
	target_compile_definitions(MathParserOrgMXparser PRIVATE MXPARSER_BUILD_ENV_MINGW)
endif()
if (ARCH_X86)
	target_compile_definitions(MathParserOrgMXparser PRIVATE MXPARSER_BUILD_ARCH_X86)
endif()
if (ARCH_ARM)
	target_compile_definitions(MathParserOrgMXparser PRIVATE MXPARSER_BUILD_ARCH_ARM)
endif()
if (ARCH_64_BIT)
	target_compile_definitions(MathParserOrgMXparser PRIVATE MXPARSER_BUILD_ARCH_64_BIT)
endif()
if (ARCH_64_BIT_TARGET)
	target_compile_definitions(MathParserOrgMXparser PRIVATE MXPARSER_BUILD_ARCH_64_BIT_TARGET)
endif()
if (ARCH_32_BIT_TARGET)
	target_compile_definitions(MathParserOrgMXparser PRIVATE MXPARSER_BUILD_ARCH_32_BIT_TARGET)
endif()
if (TARGET_WINDOWS)
	target_compile_definitions(MathParserOrgMXparser PRIVATE MXPARSER_BUILD_TARGET_WINDOWS)
endif()
if (TARGET_LINUX)
	target_compile_definitions(MathParserOrgMXparser PRIVATE MXPARSER_BUILD_TARGET_LINUX)
endif()
if (TARGET_ANDROID)
	target_compile_definitions(MathParserOrgMXparser PRIVATE MXPARSER_BUILD_TARGET_ANDROID)
endif()
if (TARGET_MACOS)
	target_compile_definitions(MathParserOrgMXparser PRIVATE MXPARSER_BUILD_TARGET_MACOS)
endif()
if (TARGET_IOS)
	target_compile_definitions(MathParserOrgMXparser PRIVATE MXPARSER_BUILD_TARGET_IOS)
endif()
if (HOST_WINDOWS)
	target_compile_definitions(MathParserOrgMXparser PRIVATE MXPARSER_BUILD_HOST_WINDOWS)
endif()
if (HOST_LINUX)
	target_compile_definitions(MathParserOrgMXparser PRIVATE MXPARSER_BUILD_HOST_LINUX)
endif()
if (HOST_ANDROID)
	target_compile_definitions(MathParserOrgMXparser PRIVATE MXPARSER_BUILD_HOST_ANDROID)
endif()
if (HOST_MACOS)
	target_compile_definitions(MathParserOrgMXparser PRIVATE MXPARSER_BUILD_HOST_MACOS)
endif()
if (HOST_IOS)
	target_compile_definitions(MathParserOrgMXparser PRIVATE MXPARSER_BUILD_HOST_IOS)
endif()
if (COMP_CL OR COMP_CLANG_CL)
	target_compile_definitions(MathParserOrgMXparser PRIVATE MXPARSER_BUILD_COMP_MSVC_BASED)
endif()

set_target_properties(MathParserOrgMXparser PROPERTIES
		WINDOWS_EXPORT_ALL_SYMBOLS TRUE
)

target_link_libraries(MathParserOrgMXparser cereal)

message(STATUS "CMAKE_CXX_FLAGS_RELEASE: ${CMAKE_CXX_FLAGS_RELEASE}")
message(STATUS "CMAKE_CXX_FLAGS for MathParserOrgMXparser: ${CMAKE_CXX_FLAGS}")