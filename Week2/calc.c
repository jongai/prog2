/******************************************************************************
* File:             calc.c
*
* Author:           Jonathan Gai  
* Created:          02/11/20 
*                   This is a calculator
*****************************************************************************/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char *argv[])
{
    if (argc == 4)
    {
        float first = atof(argv[1]);
        float last = atof(argv[3]);
        if (strncmp(argv[2], "+", 1) == 0)
        {
            printf("%.6f\n", first + last);
        }
        else if (strncmp(argv[2], "-", 1) == 0)
        {
            printf("%.6f\n", first - last);
        }
        else if (strncmp(argv[2], "x", 1) == 0)
        {
            printf("%.6f\n", first * last);
        }
        else if (strncmp(argv[2], "%", 1) == 0)
        {
            printf("%.6f\n", first - floor(first / last) * last);
        }
        else if (strncmp(argv[2], "/", 1) == 0)
        {
            printf("%.6f\n", first / last);
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
