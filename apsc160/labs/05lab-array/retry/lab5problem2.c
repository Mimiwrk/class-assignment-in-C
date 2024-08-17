#include <stdio.h>

double harmonicMean(double data[], int size);

int main(void){
    double array[] = {1.0, 3.0, 6.0, 8.0, 200.0, 31.0, 31.0};
    int size = 7;
    
    printf("%lf", harmonicMean(array, size));

    return 0;
}

double harmonicMean(double data[], int size){
    double mean;
    double denominator = 0;

    for(int index = 0; index < size; index++){
        denominator += (1/data[index]);
    }
    mean = size/denominator;

    return mean;
}

