/*
 * Author: Mimi Ngamchaianan
 * Date: Oct27, 2022
 * Purpose:  Computes the weekly power output at a power plant
 *           from daily power outputs stored in a 2D array.(adapt from powerOutput.c)
 */

#include <stdio.h>

#define NWEEKS 4
#define NDAYS 7
#define NCOLS NDAYS

// //for controlling row|
// void sumRows( double data[][ NCOLS ], int nRows, double rowSum[] );
// //for controlling column--
// double sumRow( double data[][ NCOLS ], int row );
// //to print a report
// void printReport( double weeklyOutput[], int nWeeks );

int main( void ) {
    //original array(2D array)
    double powerOutput[][ NDAYS ] 
            = { { 5.2, 3.7, 4.2, 5.1, 6.0, 5.8, 4.8 },
                  { 4.9, 3.8, 4.0, 5.1, 5.9, 6.1, 5.2 },
                    { 4.7, 3.7, 3.9, 4.8, 5.5, 6.0, 4.3 }, 
                      { 4.8, 4.1, 4.4, 4.5, 5.7, 5.9, 5.1 } };
    //an empty array(1D array) to store the output report in each week(each row)
    double weeklyOutput[ NWEEKS ];

    //double column, row;
    int row, col;   //control row and column
    int week;
    double sum;

    //calculate the sum of each row
    for(row=0; row<NWEEKS; row++){

        sum = 0.0;
        for(col=0; col<NDAYS; col++){
            sum += powerOutput[row][col];
        }
        //this line is very important, store the sum of each line into 1D array
        weeklyOutput[row] = sum;
    }
    
    //print the out put ineach week
    for(week=0; week<NWEEKS; week++){
        printf( "Total power output for week %d is %5.2f\n", week + 1, weeklyOutput[week] );
    }

    return 0;
}