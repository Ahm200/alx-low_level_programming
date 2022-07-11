#include "main.h"

/**
* print to 98
*/

void print_to_98(int n)
{
        if(n < 0 || n < 98)
        {
                int i;
                for(i = n;i <= 98;i++)
                {
                       if(i != 98)
                               printf("%d, ",i);
                       else
                               printf("%d",i);
                }
        }
        else
        {
                int i;
                for(i = n;i >= 98;i--)
                {
                       if(i != 98)
                               printf("%d, ",i);
                       else
                               printf("%d",i);
                } 
        }
        printf("\n");
    

}