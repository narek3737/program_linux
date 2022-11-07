#include <stdio.h>
#define BIG unsigned long long int

BIG factorial(int n)
{
	if(n > 20 || n < 1)
	{
		printf("Sorry we can not solve(((\n");
		return(-1);
	}	

	if(n == 0)
	{
		return(1);
	}
	else
	{
		return(n*factorial(n-1));
	}
	
}

int main(void)
{
	int n;
	scanf("%d", &n);
	BIG a = factorial(n);	
	printf("%d! = %lld\n", n, a);
	printf("size of variables:%ld, %ld\n",sizeof(a), sizeof(n));
	return(0);
}
