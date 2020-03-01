/******************************************************************************
* File:             cash.c
*
* Author:           Jonathan Gai  
* Created:          02/03/20 
*                   Calculate the minimum number of coins needed.
*****************************************************************************/

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main(void)
{
    float coinraw = 0;
    int number = 0;
    int result;
    while (true)
    {
        printf("input");
        result = scanf("%f", &coinraw);
        if ((result == 1) & (coinraw > 0))
        {
            break;
        }
    }
    int coin = round(coinraw * 100);
    while (coin > 24)
    {
        coin = coin - 25;
        number = number + 1;
    }
    while (coin > 9)
    {
        coin = coin - 10;
        number = number + 1;
    }
    while (coin > 4)
    {
        coin = coin - 5;
        number = number + 1;
    }
    while (coin > 0)
    {
        coin = coin - 1;
        number = number + 1;
    }
    printf("%d\n", number);
}
