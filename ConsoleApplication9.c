#include <stdio.h>
#include "stdafx.h"


int main()
{
	int i = 12258;
	int j = 23;
	i = i + j - i % j;
	printf("%d", i);
	return 0;
}

