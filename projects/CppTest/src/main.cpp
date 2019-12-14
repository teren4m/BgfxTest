#include <stdio.h>
#include "testCPP11.hpp"
#include "testRx.hpp"

int main(int argc, char *args[])
{
	runRxTest();
	C11();
	printf("Hello world \n");
	return 0;
}
