#include <stdio.h>

void main(void)
{
	int a = 12;
	int b = 7;
	int c;
	
	c = a & b;
	printf("%d\n",c);

	c = a | b;
	printf("%d\n",c);

	c = a ^ b;
	printf("%d\n",c);

	c = ~a+1;
	printf("%d\n",c);

}
