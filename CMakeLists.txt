cmake_minimum_required(VERSION 2.6)
PROJECT(DOS)

ENABLE_LANGUAGE(ASM_NASM)
#ENABLE_LANGUAGE(ASM_GAS)
enable_language(ASM-ATT)

INCLUDE_DIRECTORIES(
	${PROJECT_BINARY_DIR}
)

ADD_EXECUTABLE(test_ref
	test_ref.cpp
	test_ref.s
	test_ref.nasm
)

ADD_EXECUTABLE(test_add
	test_add.cpp
	test_add.s
	test_add.nasm
)

if(UNIX)
	add_custom_target(distclean @echo cleaning for source distribution)
	add_custom_command(
		COMMENT	"distribution clean"
		DEPENDS	clean
		COMMAND	sh
		ARGS		-c '(for x in cmake.depends cmake_install.cmake cmake.check_depends CMakeCache.txt cmake.check_cache Makefile gmon.out '*~' CMakeTmp .backups CMakeFiles config.h miniOS \; do find . -iname \"$$x\" \; done ) | xargs -n1 rm -rf'
		TARGET  distclean
	)
ENDIF(UNIX)

