/* DESCRIPTION: Play a guessing game.  Repeatedly prompts		   	 	  	*
 *	 	 		the user to guess a number until they guess right.	 	 	*
 *	 	 	   	This code contains a few errors.	  	 				 	*
 *	  	  		Correct the errors and submit the modified code.	 	 	*
 *	   	  	   		   	  	   	  	 		  	  	  	  			  	 	*/

#include <stdio.h>
#include <stdlib.h>

/* This program will be tested with random values of SECRET_NUMBER	   	   	*
 * (not just 14, as #defined below).  For full credit your	   		   	 	*
 * program should function correctly for any integer	  	   		  		*
 * SECRET_NUMBER between 1 and 100 (inclusive).	 	  		 	   	 	 	*
 */
//#ifndef SECRET_NUMBER       /* Do not edit or remove this line. */
#define SECRET_NUMBER 68
//#endif                      /* Do not edit or remove this line. */

int main( void ) {

	/* variable declarations */
 	int guess;
  	int done = 0;


	/* read user's guess in a loop */
   	do {
		printf("\nGuess an integer between one and one hundred:");
  		scanf("%d", &guess);

  	   	/* test if guess is correct */
 	   	if (guess == SECRET_NUMBER)
 	 	 	printf("\nYes!  %d is the secret number!\n", guess);
			done = 1;

  	}while (done != SECRET_NUMBER);

   	return 0;
}