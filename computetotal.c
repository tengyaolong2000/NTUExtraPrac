#include <stdio.h>

int main(){

    int num, first, total, dig, i, j;

    printf("Enter the number of lines\n");
    scanf("%d", &num);

    for (i=0; i<num; i++){
        total = 0;
        printf("Enter line %d\n", i+1);

        scanf("%d", &first);
        for (j=0; j<first; j++){
            scanf("%d", &dig);
            total += dig;
        }

        printf("Total is %d\n", total);
        

    }
}