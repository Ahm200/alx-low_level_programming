#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */

int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        /* your code goes there */
        printf("Last digit of %d ",n);
        int l = (n % 10);
        if(l == 0)
                printf("is %d and is 0",l);
        if(l > 5)
                printf("is %d and is greater than 5",l);
        if(l < 6 && l != 0)
                printf("is %d and is less than 6 and not 0",l);
        return (0);
        
}