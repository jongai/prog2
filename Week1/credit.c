/******************************************************************************
 * File:             credit.c
 *
 * Author:           Jonathan Gai  
 * Created:          02/03/20 
 *                   Checkt he credit card number
 *****************************************************************************/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>
#include <cs50.h>

int main(void)
{
    int sum = 0;
    int temp = 0;
    bool amex = false;
    bool visa = false;
    bool master = false;
    bool invalid = true;
    long credit = 0;
    credit = get_long("Input:");
    if ((floor(log(credit) / log(10)) == 14) && ((credit / 10000000000000 == 34) || (credit / 10000000000000 == 37)))
    {
        amex = true;
        invalid = false;
    }
    if (floor(log(credit) / log(10)) == 15)
    {
        if (credit / 1000000000000000 == 4)
        {
            visa = true;
            invalid = false;
        }
        if ((credit / 100000000000000 > 50) && (credit / 100000000000000 < 56))
        {
            master = true;
            invalid = false;
        }
    }
    if ((floor(log(credit) / log(10)) == 12) && (credit / 1000000000000 == 4))
    {
        visa = true;
        invalid = false;
    }
    for (int i = 1; i <= ((floor(log(credit) / log(10))) / 2) + 2; i++)
    {
        temp = 2 * ((credit / (long)pow(10, 2 * i - 1)) % 10);
        sum = sum + temp % 10 + temp / 10;
    }
    for (int i = 1; i <= ((floor(log(credit) / log(10)) + 1) / 2) + 2; i++)
    {
        temp = (credit / (long)pow(10, 2 * (i - 1))) % 10;
        sum = sum + temp;
    }
    if (sum % 10 != 0)
    {
        invalid = true;
    }
    if (!invalid)
    {
        if (amex)
        {
            printf("AMEX\n");
        }
        if (visa)
        {
            printf("VISA\n");
        }
        if (master)
        {
            printf("MASTERCARD\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
}
