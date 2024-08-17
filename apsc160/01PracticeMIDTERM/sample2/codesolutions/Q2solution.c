
#include <stdio.h>
#include <math.h>
#define PI acos(-1.0)
int main(void) {
    double x;
    double data;
    double xAtMax;
    double dataMax = 0.0;
    int numRows;
    int numCols;
    int countRows;
    int countCols;

    printf("Please enter number of rows in table: ");
    scanf("%d", &numRows);
    printf("Please enter number of columns in table (excluding the first): ");
    scanf("%d", &numCols);

    countRows = 1;
    while (countRows <= numRows) {
        x = countRows * PI / numRows;
        printf("%4.3f", x);

        countCols = 1;
            while (countCols <= numCols) {
                data = sin(countCols * x);
                if (data > dataMax) {
                    dataMax = data;
                    xAtMax = x;
                }
            printf("%8.3f", data);
            countCols++;
            }
    printf("\n");
    countRows++;
    }
    printf("Maximum output value of %.4f occurs at x = %.3f\n", dataMax, xAtMax);
return 0;
}