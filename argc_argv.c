#include <stdio.h>
#include "myAtoi.c"
int main (int argc, char* argv[])
{
    int i =1;
    int sum = 0;
    printf("The number of argument is: %d \n", argc);
    
    while (argv[i] != NULL)
    
    {
    sum = sum + myAtoi(argv[i]);
    i++;
  
    }
    printf("The Sum of :");
    for( i = 1; i<argc; i++)
    {
       printf(" %d ", myAtoi(argv[i])); 
       
       if (i == argc-1)
       {
            printf("= ");
       }
       else
       {
        printf(" + ");
       }
        
       
    }
    printf(" %d", sum);
    return(0);
}