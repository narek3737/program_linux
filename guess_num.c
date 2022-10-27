//
//guess the number
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randnum();
//for random number run randnum() in file generator_nums.c
void guess_num(void)
{
	int i;
	int num = randnum();
	int rep;
	printf("Guess the number!\n");

	do
	{
		scanf("%d", &i);
		if(i == num)
		{
			printf("You win!!!\n");	
		} else
		if(i < num)
		{
			printf("too less((\n");
		} else
		{
			printf("too much((\n");
		}
	}while(i != num);

	printf("Wanna play more?(y - 1)");
	scanf("%d", &rep);
	if (rep == 1)
	{
		guess_num();
	}
}

int main(void)
{
	guess_num();

	return(0);
}
