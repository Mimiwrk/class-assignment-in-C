/*
 IN C++ Why adding bracket in If statements with Multiple AND OR gives different result?
https://stackoverflow.com/questions/57033615/why-adding-bracket-in-if-statements-with-multiple-and-or-gives-different-result


- There is no boolean expression in C

Purpose : 
    unit conversion :
    1 mile = 1.61 km
    1 kg = 2.20 pond
*/

#include<stdio.h>
#include<stdlib.h>

#define mile_km 1.61 
#define kg_pound 2.20

int main(void){
    
    int type_conversion;
    double firstval;
    double finalval;

    //prompt user for type of unit conversion
    printf("Options : \n 1 -- km to mile \n 2 -- mile to km\n 3 -- kg to poundn\n 4 -- pound to kgn\n");

    //prompt user to select number
    printf("Choose type of conversin : ");
    scanf("%d", &type_conversion);

    //prompt user to select number
    printf("\nEnter number to convert : ");
    scanf("%lf", &firstval);


    //if type_conversion is in between [1,4]
    if(type_conversion <= 4 && type_conversion <= 4){

        //let's use conditions
        if(type_conversion == 1)
            //convert km to mile
            finalval = firstval * mile_km;
        if(type_conversion == 2)
            //convert mile to km
            finalval = firstval / mile_km;
        if(type_conversion == 3)
            //convert kg to pound
            finalval = firstval * kg_pound;
        else
            //convert pound to kg
            finalval = firstval / kg_pound;

    //print final conversion in 2 decimal place
    printf("Final conversion : %.2lf\n", finalval); 
    }
    //otherweise let user try again
    else{
        printf("Error! please enter again\n");
    }
return 0;
}