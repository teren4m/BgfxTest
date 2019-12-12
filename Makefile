all: BgfxTest CppTest GLESTest

BgfxTest: 
	cd ./Projects/BgfxTest/ && $(MAKE)

CppTest:
	cd ./Projects/CppTest/ && $(MAKE)

GLESTest:
	cd ./Projects/OpenGLES_2.0_Test/ && $(MAKE)
