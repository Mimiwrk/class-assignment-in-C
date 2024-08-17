double getMinimum( double data[], int size );
double getMaximum( double data[], int size );

/*
 * Function:  normalizeArray
 * Purpose:   Create a copy of an array, but with normalized values.
 * Param:     data       - the original (unnormalized) array
 * Param:     size       - the size of the array
 * Param:     normalized - the array containing the normalized values 
 */
void normalizeArray( double data[], int size, double normalized[] ) {
    //normalized values      xn = ( x - xmin ) / ( xmax - xmin )
    double xmin, xmax, x;
    int index;
    
    //store value of xmin and xmax that we get from the function
    xmin = getMinimum(data,size);
    xmax = getMaximum(data,size);
    
    //access value in each index
    for(index=0; index<size; index++){
        //x = a value ineach index
        x = data[index];
        normalized[index] = ( x - xmin ) / ( xmax - xmin );
    }
    return normalized[index];
}



// /* 
//  * Function:  getMinimum
//  * Purpose:   Determine the minimum value in an array.
//  * Param:     data - an array
//  * Param:     size - the number of values in the array
//  * Return:    the minimum value in the array
//  */
// double getMinimum( double data[], int size );

// /*
//  * Function:  getMaximum
//  * Purpose:   Determine the maximum value in an array.
//  * Param:     data - an array
//  * Param:     size - the number of values in the array
//  * Return:    the maximum value in the array
//  */
// double getMaximum( double data[], int size );


/* 
//correct answer*******************************************************
void normalizeArray( double data[], int size, double normalized[] )
{
    int index;
    double min, max;
    
    min = getMinimum(data, size);
    max = getMaximum(data, size);
    
    for (index = 0; index < size; index++)
        normalized[index] = (data[index] - min)/(max - min);
    return;
}
 */