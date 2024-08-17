/*
 * Name : Mimi Ngamchaianan
 * Student# : 85572261
 * Lab section : L1B
 * UBC email : wngamcha@student.ubc.ca
 * Date : Nov8, 2022
 * purose : Write a program that prompts the user for an integer num 
 *         in the range 1 to 21, inclusive (i.e., including 1 and 21).
*/
#include <stdio.h>

int TwoRectangles( int Height[], int NumBuildings );

int main(void){
	int Height[] = {5, 3, 5, 2, 1};
	int NumBuildings = 5;
	

	printf("%d", TwoRectangles( Height, NumBuildings ));

	return 0;
}
/*	  				 	 	 	 	  	 		 		*
 * DESCRIPTION:	This function receives an array and the	*
 *	  	  	 	size of the array and computes the	 	*
 *	   	 	  	maximum area of two rectangles that can	*
 *	   	  	 	be fit in front of all buildings	   	*
 *	   	 		 	   	   	 	   	 	   	  	   		*
 * PARAM:	   	Height - an array of unbounded integers	*
 * PARAM:	 	NumBuildings - the size of the Height	*
 *	   	 	   		array	 	  		   		  	   	*
 *	 	  	  	  	 		   	   	  	  	 			*
 * RETURN:	  	The maximum area of two rectangles that	*
 *	   	  	 	can be used for painting	  	  	 	*
 *	 	 	   		  	  	   		   	  	 	  	 	*
 * EXAMPLE:	 	Height[] = { 5, 3, 5, 2, 1 }	  	   	*
 *	  		 	Function returns: 11			  	   	*
 *                                                      */
int TwoRectangles( int Height[], int NumBuildings ) {
	int painting1[NumBuildings], painting2[NumBuildings];
	int building1 = 0, building2 = 0;
	int size1, size2;
	int min_size = Height[0];
	//int total;

	for(int k = 0; k < NumBuildings; k++){
		if(k < 3){
			painting1[building1++] = Height[k];
			if(painting1[building1++] < min_size){
				min_size = painting1[building1++];
				size1 = min_size*(building1);
			}
		}else{
			painting2[building2++] = Height[k];
			if(painting2[building1++] < min_size && !0){
				min_size = painting2[building2++];
				size2 = min_size*(building2);
			}
		}
	}

  	/*	 	  	   		 	   	 	 	   	   	   	 	*
   	 * Replace the following line with your own	  		*
  	 * solution.  Use proper code style techniques,		*
  	 * such as consistent indentation, separation of	*
	 * code blocks, spacing, and appropriate variable	*
	 * names.	 	  		 		   	 	   		  	*
	 *                                                  */

 	return size1+size2;
}