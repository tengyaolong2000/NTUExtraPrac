#include <stdio.h>

int main(){

    int height, i, j;

    printf("Please enter the number of rows\n");
    scanf("%d", &height);
    printf("Pattern \n");

    for (i=1; i<height+1; i++){
        for (j=i;  j<2*i; j++){
            printf("%d", j%10);
        }
        printf("\n");
    }
}