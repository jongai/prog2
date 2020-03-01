/******************************************************************************
 * File:             fahrenheit.c
 *
 * Author:           Jonathan Gai  
 * Created:          01/24/20 
 *                   Convert C to F
 *****************************************************************************/
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc == 2)
    {
        double c = atoi(argv[1]);
        double f;
        // int result;
        // printf("Input temperature:\nc = ");
        // while (true)
        // {
        //     result = scanf("%lf", &c);
        //     if (result == 1)
        //     {
        //         break;
        //     }
        // }
        f = 1.8 * c + 32;
        printf("f = %.1lf\n", f);
    }
    else
    {
        printf("LMAO\n");
        return 1;
    }
}
