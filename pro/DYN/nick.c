#include "stdio.h"
int abc = 0;
char destSting[100]="ddddd";
int ddmain(void)
{
	destSting[0] = 's';
	return 0;
}

int entrance(void)
{
	abc++;
		ddmain();
		return abc;
}