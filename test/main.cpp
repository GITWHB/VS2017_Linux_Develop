#include <cstdio>

#include "static_library/static.h"
#include "dynamic_library/dynamic.h"

int main()
{
	printf("hello from test!\n");
	printf("static_library test : %d\n", static_test(1));
	printf("dynamic_library test : %d\n", dynamic_test(1));
	return 0;
}