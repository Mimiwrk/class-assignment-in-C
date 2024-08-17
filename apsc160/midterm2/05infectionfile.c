/*
 * Name : Mimi Ngamchaianan
 * Student# : 85572261
 * Lab section : L1B
 * UBC email : wngamcha@student.ubc.ca
 * Date : Nov8, 2022	   	  	  	 	  	   	  		  	 	
 * PURPOSE:	Read from the file infection.txt and		 	   	* 
 *	  		save in infection_total.txt a table	  	  	 	  	*
 *		  	with infection numbers after each day	 	   	 	*
 *	 	   	  	  		   		   	  		 	 	   	   	  	*
 * TO DO 2:	As per style guidelines, add:	 	  	 			*
 *	 		* Extra line breaks to separate blocks of		 	*
 *		 	  code and		 	 		  	  	 		 	  	*
 *		   	* Comments throughout the program to	   	 	 	*
 *	  		  explain the logic.	   	 	   	  	  	 	 	*
 *	
*/
#include <stdio.h>
#include <stdlib.h>

#define FILEINNAME "infection.txt"
#define FILEOUTNAME "infection_total.txt"

int main(void) {
 	int newlyInfected;
  	int totalInfected = 0;

 	FILE *file_in, *file_out;

   	file_in = fopen(FILEINNAME, "r");

  	if (file_in == NULL) {
  	  	printf("ERROR: File could not be opened for reading.\n");
	}
 	else{
		file_out = fopen(FILEOUTNAME, "w");
  	   	if (file_out == NULL) {
  	 	   	printf("ERROR: File could not be opened for writing.\n");
   	  	}
		else {

			//print the header first
			fprintf(file_out, "Day\tNew_Infected\tTotal\n___\t____________\t_____\n");

			//use while loop to read and store the value at the same time
			int day = 1;
		  	while(day <= 10 && fscanf(file_in, "%d", &newlyInfected)==1){
				for(int column = 1; column <= 1; column++){
					totalInfected += newlyInfected;
					fprintf(file_out,"%3.d\t%12.d\t%5.d", day, newlyInfected, totalInfected);
				}
				fprintf(file_out, "\n");
				day++;
            }

  		  	fclose(file_out);
  	 	}
  		fclose(file_in);
   	}
  	return 0;
}