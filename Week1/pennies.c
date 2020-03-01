/******************************************************************************
* File:             pennies.c
*
* Author:           Jonathan Gai  
* Created:          01/24/20 
*                   Count number of pennies
*****************************************************************************/

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main(void)
{
    long start;
    int day;
    long start1;
    int result;
    long double out;
    while (true)
    {
        printf("What is the day:\n");
        result = scanf("%d", &day);
        if (result == 1)
        {
            if ((day > 27) & (day < 32))
            {
                break;
            }
        }
    }
    while (true)
    {
        printf("What is the starting amount:\n");
        result = scanf("%li", &start1);
        if (result == 1)
        {
            if (start1 > 0)
            {
                break;
            }
        }
    }
    start = start1;
    start = start * pow(2, day);
    out = (start - start1) / 100.0;
    printf("$%.2Lf\n", out);
}
