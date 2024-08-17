    while(y >= 0){

        //initialize a value of x here to control a column, also we can print anything for first column here
        printf("y = %d\t", y);
        x = 100;
        //inner loop control column; but this represent a value of row(x)
        while(x >= 0){
            //calculate 
            temperature = 10*sin((2*PI*x)/WIDTH)*cos((2*PI*y)/HEIGHT);
            printf("%5.2lf ", temperature);
            x -= deltaX;
        }