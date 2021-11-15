#include <stdio.h>

void printpattern(int height);

int main(){

    int height;
    printf("Please enter the height\n");
    scanf("%d", &height);

    printpattern(height);
}

void printpattern(int height){
    int i;
    for(i=0; i<height; i++){
        for (int space =0; space<height-i; space++) printf(" ");
        for (int k=0; k<i; k++) printf("%c", (k+i)%2==0 ? '=': '+');
        for (int j=0; j<=i; j++) printf("%c", j%2==0 ? '=': '+');
        printf("\n");
    }
    
}