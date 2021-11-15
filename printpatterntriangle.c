#include <stdio.h>

void printpattern(int height);

int main(){

    int height;
    printf("Please enter the height\n");
    scanf("%d", &height);

    printpattern(height);
}

void printpattern(int height){

for (int i=0; i< height; i++){
    for (int j=0; j<=i; j++)
    printf("%d", i%3+1);

    printf("\n");
}

}