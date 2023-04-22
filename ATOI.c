#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char var[4];
    int val;

    printf("Enter the value to Convert:");
    scanf("%[^\n]s", var);

    val = atoi(var);
    printf("The integer Value is: %d", val);
return(0);

}