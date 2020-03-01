/******************************************************************************
 * File:             crack.c
 *
 * Author:           Jonathan Gai  
 * Created:          02/12/20 
 *                   Cracks password lol
 *****************************************************************************/

#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

int letter(int i)
{
    if (i < 26)
    {
        return i + 97;
    }
    else
    {
        return i + 65 - 26;
    }
}

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("BRUH\n");
        return 1;
    }
    int i;
    int index1;
    int index2;
    int index3;
    int index4;
    char temp[6];
    char salt[2];
    salt[0] = argv[1][0];
    salt[1] = argv[1][1];
    for (i = 0; i < 52; i++)
    {
        temp[0] = (char) letter(i);
//        printf("attempt: %s, hash: %s\n", temp, crypt(temp, salt));
        if (strcmp(crypt(temp, salt), argv[1]) == 0)
        {
            printf("%s\n", temp);
            return 0;
        }
        for (index1 = 0; index1 < 52; index1++)
        {
            temp[1] = (char) letter(index1);
//            printf("attempt: %s, hash: %s\n", temp, crypt(temp, salt));
            if (strcmp(crypt(temp, salt), argv[1]) == 0)
            {
                printf("%s\n", temp);
                return 0;
            }
            for (index2 = 0; index2 < 52; index2++)
            {
                temp[2] = (char) letter(index2);
//                printf("attempt: %s, hash: %s\n", temp, crypt(temp, salt));
                if (strcmp(crypt(temp, salt), argv[1]) == 0)
                {
                    printf("%s\n", temp);
                    return 0;
                }
                for (index3 = 0; index3 < 52; index3++)
                {
                    temp[3] = (char) letter(index3);
//                    printf("attempt: %s, hash: %s\n", temp, crypt(temp, salt));
                    if (strcmp(crypt(temp, salt), argv[1]) == 0)
                    {
                        printf("%s\n", temp);
                        return 0;
                    }
                    for (index4 = 0; index4 < 52; index4++)
                    {
                        temp[4] = (char) letter(index4);
//                        printf("attempt: %s, hash: %s\n", temp, crypt(temp, salt));
                        if (strcmp(crypt(temp, salt), argv[1]) == 0)
                        {
                            printf("%s\n", temp);
                            return 0;
                        }
                    }
                }
            }
        }
    }
}
