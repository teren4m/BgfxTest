all: BgfxTest CppTest GLESTest

BgfxTest: 
	cd ./Projects/BgfxTest/ && $(MAKE)

CppTest:
	echo b

GLESTest:
	cd ./Projects/OpenGLES_2.0_Test/ && $(MAKE)