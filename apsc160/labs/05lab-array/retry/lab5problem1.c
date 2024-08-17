#include <stdio.h>

double avgStride(int data[], int element, int stride_size);

int main(void){
    int array[] = {1, 3, 6, 8, -200, 31, 31};
    int size = 7;

    printf("Average : %.1lf\n", avgStride(array, size, 2));

    return 0;
}

double avgStride(int data[], int element, int stride_size){
    double sum = 0.0;
    double average;
    int count = 0;

    for(int index = 0; index < element; index++){
        if(index%stride_size == 0){
            sum += data[index];
            count++;
        }
    }
    average = sum/count;

    return average;
}