//program write actual price with discount
//if price more than 500 discount is 3 persent, if more than 1000 - 5 percent
//

#include <stdio.h>

int main(void)
{
	int price;
	printf("Please write price:");
	scanf("%d", &price);

	if(price > 1000)
	{
		price = price - (price / 20);
		printf("You have 5%% discount:%d\n", price);
	}else if(price > 500)
	{
		price = price - (price / 100 * 3);
		printf("You have 3%% discount:%d\n", price);
	}else
	{
		printf("Sorry you haven't discount((");
	}

	return(0);
}
