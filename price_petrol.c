//write price of petrol, distance, and petrol consumption and know trip cost
//
#include <stdio.h>

float trip_cost(float price, float consump, float distance)
{
	float cost;

	cost = (distance / 100) * consump * price;

	return cost;
}

int main(void)
{
	float pr, cons, dist, cost;
	printf("Distance in km:");
	scanf("%e", &dist);
	printf("price of fuel per Liter:");
	scanf("%e", &pr);
	printf("petrol consumption 100km/l:");
	scanf("%e", &cons);

	cost = trip_cost(pr, cons, dist);

	printf("Trip cost is %.2f$ \n", cost);


	return(0);
}
