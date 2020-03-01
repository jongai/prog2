/******************************************************************************
* File:             vigenere.c
*
* Author:           Jonathan Gai  
* Created:          02/12/20 
* Description:      Encrypting using vigenere.
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
        for (int i = 0; i < strlen(argv[1]); i++)
        {
            if (!(((argv[1][i] > 96) && (argv[1][i] < 123)) || ((argv[1][i] > 64) && (argv[1][i] < 91))))
            {
                return 1;
            }
        }
        int key;
        int temp;
        int d;
        char *text = get_string("plaintext: ");
        printf("ciphertext: ");
        int ct = 0;
        for (int i = 0; i < strlen(text); i++)
        {
            temp = (int) text[i]; 
            key = argv[1][(i - ct) % strlen(argv[1])];
            if ((key > 96) && (key < 123))
            {
                key = key - 97;
            }
            else if ((key > 64) && (key < 91))
            {
                key = key - 65;
            }
            else
            {
                return 1;
            }
            // printf("temp=%d key=%d\n", temp, key);
            if ((temp > 96) && (temp < 123))
            {
                d = ((temp + key - 97) % 26) + 97;
            }
            else if ((temp > 64) && (temp < 91))
            {
                d = ((temp + key - 65) % 26) + 65;
            }
            else
            {
                d = temp;
                ct = ct + 1;
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
