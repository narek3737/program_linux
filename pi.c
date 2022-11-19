#include <stdio.h>
#include <unistd.h>
//#include <conio.h>
#define N double
N pi(long int depth)
{
	N p = 1;
	N ind = 3;
	for(long int i = 1;i <= depth; i++)
	{
		if(i%2 == 1)
			p = p - (1 / ind);
		else 	p = p + (1 / ind);
		
		ind+=2;
	}
	
	p*=4; 
	return(p);
}

int main(void)
{
	N p;
	for(long int i = 10000000000; i < 10000001000; i+=10)
	{
		printf("\x1b[H\x1b[J");
		p = pi(i);
		printf("depth =%ld pi=%.10f\n", i, p);
		sleep(0.9);
	}

	return(0);
}
