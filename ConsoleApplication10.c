#include <stdio.h>
#include "stdafx.h"
#include <limits.h>

int main()
{
		printf("signed char diap: %d ... %d\n", SCHAR_MIN, SCHAR_MAX);
		printf("unsigned char diap: 0 ... %u\n", UCHAR_MAX);
		printf("\n");

		printf("signed short diap: %d ... %d\n", SHRT_MIN, SHRT_MAX);
		printf("unsigned char diap: 0 ... %u\n", USHRT_MAX);
		printf("\n");

		printf("signed int diap: %d ... %d\n", INT_MIN, INT_MAX);
		printf("unsigned int diap: 0 ... %u\n", UINT_MAX);
		printf("\n");


		printf("signed long diap: %d ... %d\n", LONG_MIN, LONG_MAX);
		printf("unsigned long diap: 0 ... %u\n", ULONG_MAX);
	return 0;
}

