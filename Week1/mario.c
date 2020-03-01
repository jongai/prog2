/******************************************************************************
* File:             mario.c
*
* Author:           Jonathan Gai  
* Created:          02/11/20 
*                   Print a mario block
*****************************************************************************/

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(void)
{
    int result;
    int h;
    int j;
    while (true)
    {
        printf("Height: ");
        result = scanf("%d", &h);
        if ((result == 1) && (h > 0) && (h < 9))
        {
            break;
        }
    }
    for (int i = 1; i <= h; i++)
    {
        for (j = 1; j <= h - i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("#");
        }
        // printf("  ");
        // for (j = 1; j <= i; j++)
        // {
        //     printf("#");
        // }
        printf("\n");
    }
}
