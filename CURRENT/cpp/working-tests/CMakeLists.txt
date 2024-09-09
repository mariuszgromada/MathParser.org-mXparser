if (MSVC)
	add_compile_options(/utf-8)
else()
	add_compile_options(-finput-charset=UTF-8)
endif()

add_executable(WorkingTests WorkingTests.cpp WorkingTests.hpp)

target_link_libraries(WorkingTests PRIVATE MathParserOrgMXparser)

add_custom_command(TARGET WorkingTests POST_BUILD
		COMMAND ${CMAKE_COMMAND} -E copy_if_different
		$<TARGET_FILE:MathParserOrgMXparser> $<TARGET_FILE_DIR:WorkingTests>)
