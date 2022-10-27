#include <stdio.h>

int main(void)
{
	int month;
	printf("Write which month:");
	scanf("%d", &month);

	if(month <=0 || month > 12)
	{
		printf("Write correct number!!!\n");
		main();
	}

	switch (month)
	{
		case 1:
		case 2:
		case 12:
			printf("winter\n");
			break;
		case 3:
		case 4:
		case 5:
			printf("spring\n");
			break;
		case 6:
		case 7:
		case 8:
			printf("summer\n");
			break;
		default:
			printf("autumn\n");	
	}

	return(0);
}
