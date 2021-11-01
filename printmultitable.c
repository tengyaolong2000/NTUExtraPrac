#include <stdio.h>

int main(){

    int i, j, num;

    printf("Please input a number (1-9) for your mutiplication table\n");
    scanf("%d", &num);

    printf("Print multiplication table\n");
    printf(" ");
    for (i=1; i<num+1; i++){
        printf("%d ", i);
    }
    printf("\n");

    for (i=1; i<num+1; i++){
        printf("%d ", i);
        for (j=1; j<i+1; j++){
            printf("%d ", i*j);
        }
        printf("\n");
    }

    return 0;
}