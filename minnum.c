//
//Created by Narek
//minimal number in array
//but whole numbers must be positive
//

#include <stdio.h>

int strleng(int str[])
{
        int len;
        len = 0;
        while(str[len] !='\0')
        {
                len++;
        }

        return len;
}


int min_num(int nums[]) //if returns '-1' then we have nagative number in array
{
	int min = nums[0];
	int strlen = strleng(nums);

	for(int i = 1; i < strlen; i++)
	{
		if(nums[i] <= 0)
		{
			printf("There we have negative number!\n");
			return(-1);
		}

		if(nums[i] < min)
		{
			min = nums[i];
		}
	}

	return(min);
}

int main(void)
{
	int a[] = {41, 75, 774, 66, 17, 445, -87};
	int b = min_num(a);

	printf("min is %d\n", b);

	return(0);
}
