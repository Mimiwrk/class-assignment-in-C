int indexOfSmallest( int data[], int size, int startIndex ) {
    int min_num = 10;   //don't set min_num = 0; set to something higher
    int position;

    for(startIndex; startIndex<size; startIndex++){
        if(min_num > data[startIndex]){
            min_num = data[startIndex];
            //position of minimun value
            position = startIndex;
        }
    }
    return position;
}