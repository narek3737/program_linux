#ifndef ADD_H
#define ADD_H

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


int strleng(char strin[])
{
        int len;
        len = 0;
        while(strin[len] !='\0')
        {
                ++len;
        }

        return len;
}

int strleng_int(int strin[])
{
          int len;
          len = 0;
          while(strin[len] !='\0')
          {
                  ++len;
          }
  
          return len;
}



#endif
