/******************************************************************************
 * File:             ceasar.c
 *
 * Author:           Jonathan Gai  
 * Created:          02/11/20 
 * Description:      Encrypts with ceasar
 *****************************************************************************/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <cs50.h>

int main(int argc, char *argv[])
{
    if (argc == 2)
    {
        int key = atoi(argv[1]);
        int temp;
        int d;
        char *text = get_string("plaintext: ");
        printf("ciphertext: ");
        for (int i = 0; i < strlen(text); i++)
        {
            temp = (int) text[i]; 
            // printf("temp=%d key=%d\n", temp, key);
            if (temp > 96)
            {
                d = ((temp + key - 97) % 26) + 97;
            }
            else if ((temp == 33) || (temp == 44) || (temp == 32))
            {
                d = temp;
            }
            else
            {
                d = ((temp + key - 65) % 26) + 65;
            }
            printf("%c", d);
        }
        printf("\n");
    }
    else
    {
        printf("BRUH\n");
        return 1;
    }
}
