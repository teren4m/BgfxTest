all: BgfxTest CppTest GLESTest

BgfxTest: 
	cd ./Projects/BgfxTest/ && $(MAKE)

CppTest:
	echo b

GLESTest:
	echo c