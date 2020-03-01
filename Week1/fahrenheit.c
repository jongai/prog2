/******************************************************************************
 * File:             fahrenheit.c
 *
 * Author:           Jonathan Gai  
 * Created:          01/24/20 
 *                   Convert C to F
 *****************************************************************************/
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    double c;
    double f;
    int result;
    printf("Input temperature:\nc = ");
    while (true)
    {
        result = scanf("%lf", &c);
        if (result == 1)
        {
            break;
        }
    }
    f = 1.8 * c + 32;
    printf("f = %.1lf\n", f);
}
