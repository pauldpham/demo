// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_NUMERIC, "");
	printf("%'d\n", 1123456789);
	return 0;
}