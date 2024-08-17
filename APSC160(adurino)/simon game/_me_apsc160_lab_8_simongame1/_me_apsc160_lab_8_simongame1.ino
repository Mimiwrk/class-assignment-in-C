/*
Name: Mimi Ngamchaianan
Email: wngamcha@student.ubc.ca
Lab sesion: L1B
Student# 85572261
*/


//define constants etc.

#define ON HIGH
#define OFF LOW

/*
#define LED_LOSE 13
#define LEDR 12
#define LEDY 11
#define LEDB 10
#define LEDG 9
#define LED_WIN 8
*/
int output[]={13,12,11,10,9,8};	//array for an output pin number

/*
#define pb_red 7
#define pb_yellow 6
#define pb_blue 5
#define pb_green 4
*/
int input[]={7,6,5,4}; //array for an input pin number


#define TIME_PAUSE 2000
#define TIME_BLINK 100	//assume that 100 is 1 second cause it's too slow here



//for the loop control
#define MAX_sequence 5
int rand_sequence[5];	//array to store random number being generated




//define functions prototypes


//initialization
void setup()
{
  Serial.begin(9600);
  int index;
  
    //configure pin modes (inputs, outputs) etc.
	for(index=0; index<6; index++)
    	pinMode(input[index],INPUT);
	for(index=0; index<6; index++)
    	pinMode(output[index],OUTPUT);
}




//New game function
void newgame(){
  //turn on all LED for 2 second
  for(int index=1; index<=4; index++)
    digitalWrite(output[index],ON);
  delay(TIME_PAUSE);
  //turn off all LED for 2 second
  for(int index=1; index<=4; index++)
    digitalWrite(output[index],OFF);
  delay(TIME_PAUSE);
  
  Serial.println("\n\nNew game start : ");
}


//turn on and off the light
void LED_onoff(int position){
  	  	digitalWrite(output[position],ON);
  	  	Serial.println("on");
  	  	delay(TIME_BLINK);
  	  	
  	  	digitalWrite(output[position],OFF);
  		Serial.println("off");
  		delay(TIME_BLINK);
}


//winner and losser light()
void winorloss(int loop){
	if(loop == MAX_sequence){
      //blink green LED
      Serial.println("You WON!!!");
      for(int blink=1; blink<=5; blink++){
  		digitalWrite(output[5],ON);
  		delay(TIME_BLINK);
        digitalWrite(output[5],OFF);
        delay(TIME_BLINK);
      }
    }
    else{
      //blink red LED
      Serial.println("You LOST!!!");
      for(int blink=1; blink<=5; blink++){
  		digitalWrite(output[0],ON);
  		delay(TIME_BLINK);
        digitalWrite(output[0],OFF);
        delay(TIME_BLINK);
      }
    }
      
}





//main program loop
void loop()
{
 	int loop;		//outtest loop
	int count1;		//inner loop for sequence
	int count2;		//inner loop for user feedback
	int button;		//to store the value generated in each index in rand_sequence[]
  	
  	int R_btn = 0,Y_btn = 1, B_btn = 2, G_btn = 3;	//index input
  	int R_led = 1,Y_led = 2, B_led = 3, G_led = 4;	//index output
  
  
	//start new game
	newgame();
 
  
    //generate seed for the random number sequence
  	int seed = analogRead(A0);
  	randomSeed(seed);
  	Serial.println(seed);	//checking which seed we got
  
	//generate random number and stored it into an array
    for(int index=0; index<MAX_sequence; index++){
    	rand_sequence[index] = random(0,4);
    	Serial.println(rand_sequence[index]);	//checking number generated
    }
  
  
  
	//outest loop to control overall sequence----------------------------------------------------------------------------------------------------------------------
	Serial.println("\nstart the loop :");
  	loop = 0;
	while(loop < MAX_sequence){
      
      //inner loop1 to write a sequence----------------------------------------------------------------------------------------------------------------------------
      count1 = 0;
      while(count1<=loop){
        button = rand_sequence[count1];	//rand_sequence[index of chosen led]
        Serial.println("\nsequence =");
  		Serial.println(button);			//print the correct sequence
        digitalWrite(output[R_led],OFF);
        digitalWrite(output[Y_led],OFF);
        digitalWrite(output[B_led],OFF);
        digitalWrite(output[G_led],OFF);
        
        
        
        if(button == R_btn){
          Serial.println("red is chosen"); 
          LED_onoff(R_led); 
        }
        
        
        if(button == Y_btn){
          Serial.println("yellow is chosen"); 
          LED_onoff(Y_led); 
        }
        
        
      	if(button == B_btn){
          Serial.println("blue is chosen"); 
          LED_onoff(B_led);
        }
        
        
        if(button == G_btn){
          Serial.println("green is chosen"); 
          LED_onoff(G_led);
        }
       
        
      count1++;
      }//end of playing sequence loop

      
     
      //inner loop2 to check the user input and give a visual feedback----------------------------------------------------------------------------------------------
      Serial.println("\nWhat is your response :");
      count2 = 0;
      while(count2<=loop){
        //wait for the user input
        digitalWrite(output[R_led],OFF);
        digitalWrite(output[Y_led],OFF);
        digitalWrite(output[B_led],OFF);
        digitalWrite(output[G_led],OFF);
        delay(100);
        
        
        

        //go on if user push the correct button, else exist the loop
        if(digitalRead(input[R_btn])== ON){
        	if(rand_sequence[count2]==R_btn){
              Serial.println("Red is pressed");
        	  LED_onoff(R_led);
              //digitalWrite(output[R_led],ON);
        	  count2++;
        	}else{
        	  LED_onoff(R_led);
        	  count2 = 11;
        	  loop = 10;
        	}
        while(digitalRead(input[R_btn])==ON){}   //do nothing while button is still pressed  
        delay(100);
        digitalWrite(output[R_led],OFF);
        }
        
        
        
        
        if(digitalRead(input[Y_btn])==ON){
          Serial.println("Yellow is pressed");
        	if(rand_sequence[count2]==Y_btn){
        	  LED_onoff(Y_led);
        	  count2++;
        	}else{
        	  LED_onoff(Y_led);
        	  count2 = 11;
        	  loop = 10;
        	}
        while(digitalRead(input[Y_btn])==ON){}   //do nothing while button is still pressed    
        delay(TIME_BLINK);
        digitalWrite(output[Y_led],OFF);
        }	
        	
        
        
        
        if(digitalRead(input[B_btn])==ON){
          Serial.println("Blue is pressed");
        	if(rand_sequence[count2]==B_btn){
              LED_onoff(B_led);
        	  count2++;
        	}else{
        	  LED_onoff(B_led);
        	  count2 = 11;
        	  loop = 10;
        	}
        while(digitalRead(input[B_btn])==ON){}   //do nothing while button is still pressed 
        delay(TIME_BLINK);
        digitalWrite(output[B_led],OFF);
        }	
        	
        
        
        //if green button being press and is the same as random number in that index
        if(digitalRead(input[G_btn])==ON){
          Serial.println("Green is pressed");
        	if(rand_sequence[count2]==G_btn){
              LED_onoff(G_led);
        	  count2++;
        	}else{
        	  LED_onoff(G_led);
        	  count2 = 11;
        	  loop = 10;
        	}
        while(digitalRead(input[G_btn])==ON){}   //do nothing while button is still pressed 
        delay(TIME_BLINK);
        digitalWrite(output[G_led],OFF);
        } 
             
      }//end of user input loop     
      
	loop++;
	}//end of user play ground(5 attempts)
  
  
  	//tell user if they WIN or LOSS
  	winorloss(loop);
  	
  
//end of the program, but it will start the loop again cause this is super loop
}
