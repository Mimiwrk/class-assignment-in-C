/*
 * Name : Mimi Ngamchaianan
 * Student# : 85572261
 * Lab section : L1B
 * UBC email : wngamcha@student.ubc.ca
 * Date : Nov8, 2022
*/
#include <stdio.h>
#include <stdlib.h>

#define LAST_VALUE 24

int nextValue(int n);

int main(void) {

	int num;

	//printf("Enter a number : ");
	scanf("%d", &num);

 	while(num < LAST_VALUE){
		num = nextValue(num);
		printf("%d\n", num);

		//printf("\nEnter another number : ");
		scanf("%d", &num);
	}

	return 0;
}

int nextValue(int n)
{	
    return 2*n;
}
