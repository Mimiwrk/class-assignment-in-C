#include <math.h>
#include <stdio.h>

#define SIZE 6  //Size must be more than or equal to zero

//function prototypes
double mean(double data[], int n);  //a function to compute the mean (or average) of data stored in an array
double var(double data[], int n);   //a function to compute the sample variance of data stored in an array
double sdev(double data[], int n);  //a function to compute the sample standard deviation of data stored in an array
double minimum(double data[], int n);   //a function to compute the minimum value of data stored in an array

int main(void){

    double array[] = {1.1, -5.4, 4.2, 6.5, -8.7, 9.1};

    printf("mean : %lf\n", mean(array, SIZE));
    printf("variance : %lf\n", var(array, SIZE));
    printf("standard deviation : %lf\n", sdev(array, SIZE));
    printf("minimum : %lf\n", minimum(array, SIZE));

    return 0;
}
/*
 * Computes and returns the mean of the values in the array.
 * (from index 0 to index n - 1)
 *
 * Param: data - the array containing the data
 * Param: n - size of data (average of first n slots will be computed)
 * 
 */
double mean(double data[], int n)
{
    double sum = 0.0;

    for (int index = 0; index < n; index++)
        sum += data[index];

    //sum of all value in an array/number of how many terms
    return sum / n;
}
 
/*
 * Computes and returns the variance of the values stored in the array data.
 * (from index 0 to index n - 1)
 *
 * Param: data - the array containing the data 
 * Param: n - size of data (variance of first n slots will be computed)
 *
 * Assumption: n >= 2.
 */
double var(double data[], int n)
{
    //call average function to calculate further step for variance
    double avg = mean(data, n);
    double sumSqDiff = 0.0;

    for (int index = 0; index < n; index++)
        //the sum of (eachvalue - average)^2
        sumSqDiff += pow(data[index] - avg, 2.0);

    //sum sqauare/(terms-1)
    return sumSqDiff / (n - 1);
}
 
/*
 * Computes and returns the standard deviation of
 * the values stored in the array data
 * (from index 0 to index n - 1)
 *
 * Param: data - the array containing the data 
 * Param: n - size of data (std deviation of first n slots will be computed)
 *
 * Assumption: n >= 2.
 */
double sdev(double data[], int n)
{   
    //call variance function for square root, to calculate standard deviationm value 
    return sqrt(var(data, n));
}
 

/*
 * Computes and returns the minimum value stored in index 0 to (n - 1) of
 * the array data.
 *
 * Param: data - the array containing the data
 * Param: n - size of data (average of first n slots will be computed)
 */
double minimum(double data[], int n)
{
    /* Assume minimum is first entry in the array (at first) */
    double minValue = data[0];

    /* Loop through the rest to find the actual minimum */ 
    //start from index1 because we already set minimun value = index0
    for (int index = 1; index < n; index++)
        if (data[index] < minValue)
            minValue = data[index];

    return minValue;
}