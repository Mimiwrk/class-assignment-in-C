    height = 1;
    while(height <= ROW){
        width = 1;
        if(height == 1){
            count = 1;
            while(width <= num){
                printf("%3.i",count);
            count++;
            width++;
            }
        }else{
            count = num;
            while(width <= num){
                printf("%3.i",count);
            count--;
            width++;
            }
        }

        printf("\n");
        height++;
    }


    printf("\n");
