/*
 * Author: Joe Gear
 * Date: March 11, 2009
 * Purpose:  Computes the weekly power output at a power plant
 *           from daily power outputs stored in a 2D array.
 */

#include <stdio.h>

#define NWEEKS 4
#define NDAYS 7
#define NCOLS NDAYS

//for controlling row|
void sumRows( double data[][ NCOLS ], int nRows, double rowSum[] );
//for controlling column--
double sumRow( double data[][ NCOLS ], int row );
//to print a report
void printReport( double weeklyOutput[], int nWeeks );

int main( void ) {
    //original array(2D array)
    double powerOutput[][ NDAYS ] 
            = { { 5.2, 3.7, 4.2, 5.1, 6.0, 5.8, 4.8 },
                  { 4.9, 3.8, 4.0, 5.1, 5.9, 6.1, 5.2 },
                    { 4.7, 3.7, 3.9, 4.8, 5.5, 6.0, 4.3 }, 
                      { 4.8, 4.1, 4.4, 4.5, 5.7, 5.9, 5.1 } };
    //an empty array(1D array) to store the output report in each week(each row)
    double weeklyOutput[ NWEEKS ];

    sumRows( powerOutput, NWEEKS, weeklyOutput );
    printReport( weeklyOutput, NWEEKS );

    return 0;
}

/*
 * Sums the rows of the array data.  At the end of this function call
 * rowSum[ i ] = sum of the elements on row i of data (0 <= i < nRows).
 *
 * Parameter: data - the two dimensional array of data to be summed
 * Parameter: nRows - the number of rows of data to be summed
 * Parameter: rowSum - the one dimensional array of data that will
 *            store the sums
 *
 * Assumption: data has at least nRows rows and rowSum has at least 
 *             nRows entries
 */
void sumRows( double data[][ NCOLS ], int nRows, double rowSum[] ) {
    int row;

    for( row = 0; row < nRows; row++ ) {
        //call the function below(control the column)>>> sumRow( data, row );
        //basically nested for loop in the main function
        //this is the total sum of each row
        rowSum[ row ] = sumRow( data, row );
    }
}


/*
 * Sums the entries on a specified row of a two dimensional array
 *
 * Parameter: data - the two dimensional array
 * Parameter: row - the index of the row to be summed
 *
 * Assumption: row is a valid row index into the array data
 */
double sumRow( double data[][ NCOLS ], int row ) {
    int col;
    double sum = 0.0;

    //process to sum each column
    for( col = 0; col < NCOLS; col++ ) {
        sum += data[ row ][ col ];
    }

    return sum;
}







/*
 * Prints weekly power output.
 * 
 * Parameter: weeklyOutput - an array containing the power 
 *            output for each week
 * Parameter: nWeeks - number of weeks of data to be printed
 * 
 * Assumption: weeklyOutput has at least nWeeks entries
 */
void printReport( double weeklyOutput[], int nWeeks ) {
    int week;

    for( week = 0; week < nWeeks; week++ ) {
        printf( "Total power output for week %d is %5.2f\n", 
                 week + 1, weeklyOutput[ week ] );
    }
}

