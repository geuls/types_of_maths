#include <stdio.h>
#include "stdafx.h"


int main()
{
	int i = 12258;
	int j = 23;
	int _11 = 365;
	int _12 = 7;
	int _21 = 996;
	int _22 = 4;
	_11 = _11 + _12 - _11 % _12;
	i = i + j - i % j;
	_21 = _21 + _22 - _21 % _22;
	printf("%d\n", i);
	printf("%d\n", _11);
	printf("%d\n", _21);
	return 0;
}

