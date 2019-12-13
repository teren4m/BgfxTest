CC = g++
BGFX_SO_DEBUG = ../../bgfx/.build/linux64_gcc/bin/libbgfx-shared-libDebug.so
BGFX_SO_RELEASE = ../../bgfx/.build/linux64_gcc/bin/libbgfx-shared-libRelease.so
BGFX_HEADERS = -I../../bgfx/include -I../../bx/include -I../../bimg/include
COMPILER_FLAGS = -w
LINKER_FLAGS = $(BGFX_SO_DEBUG) -lSDL2 -lGL -lX11 -ldl -lpthread -lrt

all : main.cpp
	$(CC) main.cpp -o main $(COMPILER_FLAGS) $(LINKER_FLAGS) $(BGFX_HEADERS)
