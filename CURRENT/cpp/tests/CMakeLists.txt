Include(FetchContent)

FetchContent_Declare(
		Catch2
		GIT_REPOSITORY https://github.com/catchorg/Catch2.git
		GIT_TAG        v3.6.0
)

FetchContent_MakeAvailable(Catch2)

list(APPEND CMAKE_MODULE_PATH "${catch2_SOURCE_DIR}/contrib")
message(STATUS "CMAKE_MODULE_PATH: ${CMAKE_MODULE_PATH}")

if (MSVC)
	add_compile_options(/utf-8)
else()
	add_compile_options(-finput-charset=UTF-8)
endif()

add_executable(UnitTests ExpressionTest.cpp
		Miscellaneous.hpp
		SyntaxTest.cpp
		PerformanceTest.cpp
		ApiTest.cpp
		TestsRun.cpp
		UnicodeTest.cpp)


if (UNIX)
	target_link_libraries(UnitTests PRIVATE MathParserOrgMxParser Catch2::Catch2WithMain pthread)
else()
	target_link_libraries(UnitTests PRIVATE MathParserOrgMxParser Catch2::Catch2WithMain)
endif()

add_custom_command(TARGET UnitTests POST_BUILD
		COMMAND ${CMAKE_COMMAND} -E copy_if_different
		$<TARGET_FILE:MathParserOrgMxParser> $<TARGET_FILE_DIR:UnitTests>)


message(STATUS "CMAKE_CXX_FLAGS for TestsRun: ${CMAKE_CXX_FLAGS}")

include(Catch)
catch_discover_tests(UnitTests)