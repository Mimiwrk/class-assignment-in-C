//purpose : out[i] contains the sum of all the values in the row with index i


void noName(int data[][NUMCOLS], int numRows, int out[])
{
    for (int i = 0; i < numRows; i++)
    {
        int x = 0;
        for (int j = 0; j < NUMCOLS; j++)
            x += data[i][j];

        out[i] = x;
    }
}