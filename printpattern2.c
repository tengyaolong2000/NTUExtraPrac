#include <stdio.h>

int main(){

    int i, j, rows;

    printf("Please enter the number of rows\n");
    scanf("%d", &rows);

    printf("The pattern is \n");

    for (i=1; i<rows+1; i++){
        for (j=1; j<i+1; j++){
         
            printf( (j%2 == 0) ? "B" : "A");

        }
        printf("\n");
    }
}