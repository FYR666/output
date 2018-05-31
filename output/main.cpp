#include"stdio.h"
void main()
{
	int i, j, k;
	for (i = 0; i < 6; i++)
	{
		for (k = 6; k >= i; k--)
			printf(" ");
		for (j = 0; j < 2*i-1; j++)
			printf("*");
		printf("\n");
	}
	for (i = 6; i >= 0; i--)
	{
		for (k = 6 - i; k >= 0; k--)
			printf(" ");
		for (j = 2 * i - 1; j > 0; j--)
			printf("*");
		printf("\n");
	}
}
