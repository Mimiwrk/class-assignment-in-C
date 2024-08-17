/*
* Author : Mimi Ngamchaianan
* Date : Oct 14, 22
* Purpose : Draw fancier triangle
*/

int main(void){
void drawTri(int size, int x, int y);

void fancyPic(int size)
{   
    int x, y;

    //set y = size
    y = size;
    while(y > 0){

        //for the triangle to start at the origin of x= 0
        x = 0;
        while(x <= size-y){
            drawTri(1, x, y);
            x++;
        }
    y--;
    }

}



/* 

//nice scale
    int x, y;

    y = 1;
    while(y <= size){
        x = 0;
        while(x < y){
            drawTri(1, x, y);
            x++;
        }
    y++;
    }
    
*/