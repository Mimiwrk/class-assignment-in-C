#include <stdio.h>

#define TRUE 1
#define FALSE 0

/* determine whether or not entries on every row are in decersing order */
int allRowsDecreasign(FILE *inFile);

int main(){
    FILE *inFile;

    inFile = fopen("num.txt", "r");

    if(inFile == NULL){
        printf("Error\n");
    }else{

        //true will reurn 1, false will return 0;
        printf("%s",allRowsDecreasign(inFile));

        fclose(inFile);
    }

    return 0;
}


int allRowsDecreasign(FILE *inFile){
    int allDecreasing = TRUE;
    int num1, num2, num3;

    while(fscanf(inFile, "%d %d %d", &num1, &num2, &num3) == 3 && allDecreasing){
        if(num1 < num2 || num2 < num3)
            allDecreasing = FALSE;
    }
    return allDecreasing;
}




// while(fscanf(inFile, "%i", &inPixel) == 1){
//             //verify if writing file can be opened
//             if(outFile == NULL){
//                 printf("Error : out put file cannot be opened!!\n");
//             }
//             else{
//                 //translate number into a pixcel
//                 outPixel = (double)white * (sqrt((double)inPixel/(double)white));  //prime pixcel equation
//                 //write translated pixel into another file
// *               fprintf(outFile, "%i ", outPixel);
//                 //increase count each time until it reaches to if statement #width times
//                 count++;

//                 //compare count to width, whenever count != width it will get out of the loop and go back to the top again(still in while loop) after it reaches the end of while loop.
//                 if(count == width){
//                     /*reset count value to zero again for the loop to print a new line whenever the value equal to width(or row)
//                       try to set count = 3; or 2 or 1 and see the difference of the output in each line*/
//                     count = 0;
//                     //print the new line
//                     fprintf(outFile, "\n");
//                 }
//             }
//         }