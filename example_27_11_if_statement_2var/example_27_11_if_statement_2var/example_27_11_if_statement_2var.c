#include<stdio.h>
int main()
{
	int i, j;
	for (i = 2, j = 5;j > 0 ; i *= 2, j--)
		printf("%d %d\n", i, j);
	return 0;
}