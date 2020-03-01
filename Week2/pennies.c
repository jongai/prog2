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
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc == 3)
    {
        char *ptr;
        int day = atoi(argv[1]);
        long start1 = strtol(argv[2], &ptr, 10);
        long start;
        long double out;
        // while (true)
        // {
        //     printf("What is the day:\n");
        //     result = scanf("%d", &day);
        //     if (result == 1)
        //     {
        //         if ((day > 27) & (day < 32))
        //         {
        //             break;
        //         }
        //     }
        // }
        // while (true)
        // {
        //     printf("What is the starting amount:\n");
        //     result = scanf("%li", &start1);
        //     if (result == 1)
        //     {
        //         if (start1 > 0)
        //         {
        //             break;
        //         }
        //     }
        // }
        if ((start1 > 0) && (day > 27) && (day < 32))
        {
            start = start1;
            start = start * pow(2, day);
            out = (start - start1) / 100.0;
            printf("$%.2Lf\n", out);
        }
        else
        {
            printf("BRUH\n");
            return 1;
        }
    }
    else
    {
        printf("BRUH\n");
        return 1;
    }
}
