#include "main.h"

int myAtoi( char *str)
{
   
    int sign = 1;
    int result = 0;
    int i = 0;

    if (str[i] == '-')
    {
        sign = -1;
        i++;
    }

    for(; str[i] != '\0'; i++ )
    {
        result = (result * 10) + str[i] - '0';
    }
    return result * sign;

}
