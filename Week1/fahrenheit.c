/******************************************************************************
* File:             fahrenheit.c
*
* Author:           Jonathan Gai  
* Created:          01/24/20 
*                   Convert C to F
*****************************************************************************/
#include <stdio.h>

int main(void)
{
	double c;
	double f;
	int result;
	printf("Input temperature:\nc = ");
	result = scanf("%lf", &c);
	if (result == 1){
		f = 1.8 * c + 32;
		printf("f = %.1lf\n", f);
	}
}
