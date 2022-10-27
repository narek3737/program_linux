//BBBBB // вы не можете иметь только мороженное (без сэндвича)
//AAACCCAA // вы не можете иметь неравные по длине окончания в сэндвиче
//AACDCAA // вы не можете иметь начинку из разных символов
//A // ваш сэндвич не может быть менее трех символов
#include <stdio.h>
#include "narek.h"


void isSandwich(char a[])
{
	int len = strleng(a);

	if(len < 3)
	{	
		printf("ваш сэндвич не может быть менее трех символов\n");
		return;
	}

	//printf("if sandwich is less than 3 and you see that, that is error\n");


	for (int i = 0; i <= len/2; i++)
	{
		if(a[i] != a[len - i - 1])
		{
			printf("вы не можете иметь неравные по длине окончания в сэндвиче\n");
			return;
		}
	}
	printf("That's Sandwich!!!\n");
};	


int main(void)
{	
	int a;
	char str[100];
	scanf("%[^\n]%*c", str);
	a = strleng(str);
	//printf("firsht letter is %c\n", str[0]);
	printf("%s length is %d\n",str, a);

	isSandwich(str);

	return(0);
}
