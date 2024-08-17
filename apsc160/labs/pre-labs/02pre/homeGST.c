/* Author: Mimi Ngamchaianan
 * Student Number:  58872261
 * E-mail Address:  wirakarn.ngam@gmail.com
 * Lab Section: L1B
 * Date: October 5,2022
 * Purpose: write a program to help a prospective home buyer 
 *          determine the amount of GST payable on a new home
 */

#include <stdio.h>
#include <stdlib.h>

#define grosstax 0.05
#define rebatepercent 0.36
#define highprice 450000.00
#define lowprice 350000.00
#define maxrebate 5000.00

int main(void){
int housePrice;
double gstPayable;
double discount;
double gstgross;

    //prompt the user for the purchase price of the home
    printf("Enter the house prize : ");
    scanf("%d",&housePrice);

    //if house price is negtive
    if(housePrice < 0)
        printf("The house price cannot be negative\n");
    else{
        //1) The gross amount of tax payable is computed as 5% 
        gstgross = housePrice * grosstax;

        //2) calculate if
            //2.1 purchase price is <= $350,000.00, then the rebate is 36% of the value computed in step (1) to a maximum of $5,000.00.
            if(housePrice <= lowprice){
                //calculate the amount of rebate 36% of the gst in state 1)
                discount = gstgross * rebatepercent;
                //if amount of reduct to a maximum of $5,000.00
                if(maxrebate <= discount){
                    discount = maxrebate; 
                }
            }
            //2.2 if the purchase price is strictly between $350,000.00 and $450,000.00 calculate the rebate
            else if(housePrice > lowprice && housePrice < highprice){
                //debate is computed as:
                discount = maxrebate * (highprice - housePrice) / 100000.00;
            }
            //2.3 if purchase price is $450,000.00 or more, then there is no rebate.
            else{
                discount = 0.00;
            }
            
    // 3) The GST payable is the amount computed in step (1) minus the amount computed in step (2).
    gstPayable = gstgross - discount;
    //print the GST payable on the screen
    printf("GST payble on a new home : %.2f\n", gstPayable);
    }
return 0;
}