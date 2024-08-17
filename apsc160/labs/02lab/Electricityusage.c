/*
Name : Mimi Ngamchaianan
Student# : 85572261
Lab section : L1B
UBC email : wngamcha@student.ubc.ca
Date :Oct7, 2022

Question 1: Electricity Usage Calculator
*/
#include <stdio.h>
#include <stdlib.h>

#define tax 1.05
#define maxused 400
#define charge1 0.093
#define charge2 0.045
#define deleverycharge 10.98    //permonth

int main(void){
    double amountused;  //kilowatt hour
    double firstcharge, secondcharge;
    double finalcharge;
    double totalcost;
    //1month = 720 hrs

    printf("Enter number of kilowatt hours of electricity used : ");
    scanf("%lf", &amountused);

    //If the number of kilowatt hours of electricity used is negative
    if(amountused < 0){
        printf("Error: invalid input\n");
    }
    //If the amount used is 400 kilowatt hours or less, a charge of $0.093 per kilowatt hour applies.
    else{
        if(amountused <= maxused){
            finalcharge = amountused * charge1;
        }else{
            //calculate charge amount for first 400
            firstcharge = maxused * charge1;
            //calculate charge amount additionally from 400
            secondcharge = (amountused-maxused) * charge2;

            finalcharge = firstcharge + secondcharge;
        }
    //overall charge is final charge plus delevery fee, then calculate for the cost after tax = 105%
    totalcost = (finalcharge + deleverycharge) * tax;
    printf("Total cost of electricity is $%.2lf\n", totalcost);
    }

return 0;
}



/*
    //overall cost is number electricity used plus the charge, then calculate for the cost after tax = 105%
    totalcost = (amountused + finalcharge + deleverycharge) * tax;
*/