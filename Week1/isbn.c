/******************************************************************************
 * File:             isbn.c
 *
 * Author:           Jonathan Gai  
 * Created:          01/28/20 
 *                   Checking if ISBN is legit.
 *****************************************************************************/
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
    char isbnraw[20];
    long isbn = 0;
    int sum = 0;
    int result = 0;
    bool di = true;
    char *ptr;
    while (true)
    {
        printf("Input:");
        result = scanf("%s", isbnraw);
        for (int i = 0; i < strlen(isbnraw); i++)
        {
            if (!isdigit(isbnraw[i]))
            {
                di = false;
            }
        }
        if (di)
        {
            isbn = strtol(isbnraw, &ptr, 10);
        }
        if ((result != 0) & (di) & (isbn / 1000000000 < 10))
        {
            break;
        }
    }
    for (int i = 1; i <= 10; i++)
    {
        sum = sum + (isbn % 10) * (11 - i);
        isbn = isbn / 10;
    }
    sum = sum % 11;
    if (sum == 0)
    {
        printf("YES\n");
    }
    if (sum != 0)
    {
        printf("NO\n");
    }
}
