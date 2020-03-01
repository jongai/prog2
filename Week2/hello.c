/******************************************************************************
* File:             hello.c
*
* Author:           Jonathan Gai  
* Created:          02/11/20 
* Description:      hello
*****************************************************************************/

#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc == 2)
    {
        printf("Hello, ");
        printf("%s!\n", argv[1]);
    }
    else
    {
        printf("LMAO\n");
        return 1;
    }
}
