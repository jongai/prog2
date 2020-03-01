/******************************************************************************
* File:             loops.c
*
* Author:           Jonathan Gai  
* Created:          02/19/20 
*                   prints a bar graph
*****************************************************************************/

#include <stdio.h>

int main(void)
{
    const int grade = 5;
    int scores[grade];
    int j = 0;
    int i = 0;
    for(i = 0; i < grade; i++)
    {
        printf("Score %d: ", i + 1);
        scanf("%d", &scores[i]);
    }
    for(int k = 0; k < grade; k++)
    {
        printf("Score %d: ", k + 1);
        for(j = 0; j < scores[k]; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
