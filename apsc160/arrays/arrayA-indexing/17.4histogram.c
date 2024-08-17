/*
*   Name : Mimi Ngamchaianan
*   Student# : 85572261
*   Lab section : L1B
*   UBC email : wngamcha@student.ubc.ca
*   Date : Oct18, 2022
*   Purpose : -Write a program that prompts the user for a series of positive integers 
*           between 1 and 100, terminated with -1.
*           -write a function called printRow that prints a specified character a given number of times, all in a row, on the screen
*/

#include <stdio.h>
#include <stdlib.h>

#define MINIMUM 1       //miniimum number that user can input
#define MAXIMUM 100     //maximum number that user can input
#define SIZE 10         //to control the size of the array

//function prototype for printting a row
void printRow(char symbol, int number);

int main(void){
    //for user input
    int num;
    //for printing row and column, rangeX and rangeY are for the range in each index of an array
    int column;
    int rangeX = 1;
    int rangeY = 10;
    char symbol = '*';

    int count;  //count how many number in each range
    //initialize an array with size 10(that store 10 zero in an array)
    int data[SIZE] = {0};
/* 
    //for testing if we can use 'int data[10] = {0};' instead of data[] = {0,0,0,0,0,0,0,0,0,0};
    int i;
    for (i=0; i<10; i++)
        printf("\n%d", data[i]); 
*/


/* 
    //my old code
       do{
        //prompts the user for a series of positive integer
        printf("Enter series of positive integers in range [1, 100] (Enter -1 to end) : ");
        scanf("%i", &num);
        //terminate the program if user enter -1

        if(num == -1){
            exit(0);
        }
    }while(num >= MINIMUM && num <= MAXIMUM); 
*/


    //prompts the user for a series of positive integer
    printf("Enter series of positive integers in range [1, 100] (Enter -1 to end) : ");
    scanf("%i", &num);

    count = 0;      //initialize here before this while loop to control the index, and tell us how many number in each range in order to print '*' in another while loop
    while(num != -1){ 
        //store num in the counter of each individual range in the array
        if(num >= MINIMUM && num <= MAXIMUM){
            //this is the integer, even the answer is a decimal places it will always change to an integer value
            count = (num-1)/10;
            //tell the index position where each number should go in, add 1 to the index slot(in that range of 10)
            data[count]++;
        }
        else {
            printf("Please enter a valid number\n");
        }

        //put this below if-else statement but inside while loop
        scanf("%i", &num);
    }

    //print histogram
    column = 0;
    count = 0;  //also initialize the value here to reset the loop value, for printing the star
    while(column < SIZE){
        
        printf("  %2d - %2d: ", rangeX, rangeY);
        //call function to print a row
        printRow(symbol, data[count]);

    //tell us the range in each index(index0 = 1-10, index2 = 11-20, index3 = 21-30, ..., index9 = 91-100)
    rangeX += 10;
    rangeY += 10;
    //control column
    printf("\n");
    column++;
    //store number in the count variable(how many number are in range)
    count++;
    }

    return 0;
}


//a function that prints a specified character
void printRow(char symbol, int num_inrange){
    //num_inrange is how many number are in the range, same as count in the main function
    int row = 0;
    while(row < num_inrange){
        printf("%c", symbol);
        row++;
    }
}





//go back to assignment 15.1printpattern or pre-lab 3.1triangle for printing character for printRow function
    // for(count = 0; count < length; count++){
    //     printf("%c", symbol);
    // }








/*
int main(void){
    int num, column;

    int rangeX = 1;
    int rangeY = 10;
    char symbol = '*';

    int count = 0;   
    int data[SIZE] = {0};
    int index = 0;



    printf("Enter series of positive integers in range [1, 100] (Enter -1 to end) : ");
    scanf("%i", &num);

    while(num != -1){ 
        if(num >= MINIMUM && num <= MAXIMUM){
            index = (num-1)/10;
            data[index]++;
        }
        else {
            printf("Please enter a valid number\n");
        }
        scanf("%i", &num);
    }

    column = 0;
    index = 0;
    while(column < SIZE){
        
        printf("  %2d - %2d: ", rangeX, rangeY);
        printRow(symbol, data[index]);

    rangeX += 10;
    rangeY += 10;
    printf("\n");
    column++;
    index++;
    }

    return 0;
}
*/




/*     //tell us the range in each index(index0 = 1-10, index2 = 11-20, index3 = 21-30, ..., index9 = 91-100)
    count = 0;
    while.........{

    rangeX += 10;   // or (count*10)+1;
    rangeY += 10;   // or (count+1)*10;
    print()

    count++;
    }
    
*/