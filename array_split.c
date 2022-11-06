#include <stdio.h>
#include "narek.h"


void bubblesort_int(int c[])
{
	int tmp;
	int len = 10;
	for(int i = 0; i < (len - 1); i++)
	{
		for(int j = 0; j < len - i - 1; j++)
		{
			if(c[j] > c[j + 1])
			{
				tmp = c[j];
				c[j] = c[j+1];
				c[j+1] = tmp;
			}
				
		}
	}
}

int main(void)
{
	int a[5] = {1, 3, 5, 7, 9};
	int b[5] = {2, 4, 6, 8, -4};
	int c[10];

	for(int j = 0; j < 5; j++)
	{
		c[j] = a[j];
		c[j + 5] = b[j];
	}

	for(int i = 0; i < 10; i++)
		printf("%d", c[i]);

	printf("\n");
	bubblesort_int(c);
	
	for(int i = 0; i < 10; i++)
		printf("%d", c[i]);

	printf("\n");
	return(0);
}
