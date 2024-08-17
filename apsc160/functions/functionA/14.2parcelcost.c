/*
Name : Mimi Ngamchaianan
Student# : 85572261
Date 

prompts the user for the weight of a parcel 
and that prints the cost of shipping that parcel 
*/

#include<stdio.h>
#include<stdlib.h>

#define SM_WEIGHT      2.0  /* limiting weight for small parcels in kgs */
#define MD_WEIGHT      4.0  /* limiting weight for medium parcels in kgs */
#define SM_BASE_RATE   3.0  /* base rate for small parcels */
#define LG_BASE_RATE   4.5  /* base rate for large parcels */
#define MD_RATE_PER_KG 0.75 /* rate per kg for medium parcels */
#define LG_RATE_PER_KG 0.95 /* rate per kg for large parcels */

// Function Prototype
double calcCost(double weight);

//main function
int main(void)
{
    double weightKgs;
    double cost;

    printf("Please enter a weight in kilograms: ");
    scanf("%lf", &weightKgs);

    //call calcCost and store it in cost variable
    cost = calcCost(weightKgs);

    printf("Cost of shipping : $%.2f\n", cost);
    return 0;
}

/*
 * Purpose: Determine the cost of shipping a parcel of a given weight.
 * Parameter: weight - weight of  the parcel in kgs
 * Returns: cost of shipping the parcel
 */
//actual function to calculate the cost of shipping
double calcCost(double weight)
{   
    double rate;
    //any parcel weighing 2 kg or less is charged a flat rate of $3.00
    if(weight <= SM_WEIGHT)
        rate = SM_BASE_RATE;
    //parcels weighing more than 2 kg but no more than 4 kg are charged $3.00 plus $0.75 times the weight in excess of 2 kg
    else if(weight > SM_WEIGHT && weight <=MD_WEIGHT)
        rate = ((weight-SM_WEIGHT) * MD_RATE_PER_KG) + SM_BASE_RATE;
    //arcels weighing more than 4 kg are charged $4.50 plus $0.95 times the weight in excess of 4 kg
    else
        rate = ((weight-MD_WEIGHT) * LG_RATE_PER_KG) + LG_BASE_RATE;

    return rate;
}
