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

