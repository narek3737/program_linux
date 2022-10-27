#ifndef ADD_H
#define ADD_H

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


#endif
