#include "main.h"

/**
* time table
*/

void times_table(void)
{
        int i;
        for(i = 0;i < 10;i++)
        {
                int j;
                for(j = 0;j < 10;j++)
                {
                        if(j != 9)
                        printf("%d,  ",i * j);
                else
                        printf("%d",i * j);
                }
                printf("\n");
        }
}