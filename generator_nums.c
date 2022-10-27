//generator of random numbers
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randnum()
{
	int num;
	double x;
	srand(time(0));
	x = rand();
	x = (1.0 / (RAND_MAX) * x);
	x *= 100;
	num = x;
	return(num);
}

