/* 
Author : Mimi Ngamchaianan
Date: Nov3, 2022
*/


////////////////////////////////////////////////////////////////////////////
//1. out put of the code

i=3, num=6

////////////////////////////////////////////////////////////////////////////
//1(b) same out out but without break statement in the code

    //change i to 0
    int i = 0, sum = 0;

    //loop will 
    while( i<3 ){
        //need prefix incrementation
        sum += ++i;
    }

    printf("i=%d, sum=%d\n", i, sum);


////////////////////////////////////////////////////////////////////////////
//2(a) exit the loop using break
int search(int value, int array[NUM_ROWS][NUM_COLS]){
    int num;

    for(int row = 0; row < NUM_ROWS; row++){
        for(int column = 0; column < NUM_COLS; column++){
            if(array[row][column] == value)
                //num = array[row][column];
                break;
        }    
    }
    //return num;
}


////////////////////////////////////////////////////////////////////////////
//2(b) exit the loop using return
int search(int value, int array[NUM_ROWS][NUM_COLS]){

    for(int row = 0; row < NUM_ROWS; row++){
        for(int column = 0; column < NUM_COLS; column++){
            if(array[row][column] == value)
                return array[row][column];
        }
    }
}


////////////////////////////////////////////////////////////////////////////
//2(c) exit the loop without return and break
int search(int value, int array[NUM_ROWS][NUM_COLS]){
    int num;

    for(int row = 0; row < NUM_ROWS; row++){
        for(int column = 0; column < NUM_COLS; column++){
            if(array[row][column] == value){
                //num = array[row][column];
                goto EndOfLoop;     //suitible to crazy nested loop
            }
        }
    
    EndOfLoop:  //idetifier
    //return num;
}