#include <stdio.h>

#define BLUE 0
#define GREEN 1
#define RED 2

#define BLACK 255

void negative(int R[], int G[], int B[], int imgSize);      //create a colour negative of an image
void filterByChannel(int R[], int G[], int B[], int imgSize, int filterColour);     //apply a red, green or blue filter to an image
void rgb2grey(int R[], int G[], int B[], int imgSize);      //convert a colour image to greyscale
int max(int red, int green, int blue);

int main(void){
    red = { 128, 128, 236, 255, 0, 255 };
    green = { 0, 128, 118, 255, 255, 0 };
    blue = { 0, 128, 19, 0, 255, 255 };



    return 0;
}

//convert black(RGB = 0, 0, 0) to white(RGB = 255, 255, 255) and vice versa
void negative(int R[], int G[], int B[], int imgSize){
    int index;
    for(index = 0; index < imgSize; index++){

    }
}