#include <stdio.h>

void printpattern(int rows);
void printpattern2(int rows);

int main(){

    int rows;
    printf("Please enter the number of rows\n");
    scanf("%d", &rows);

    printf("The pattern is \n");

    printpattern2(rows);
  
}


void printpattern(int rows){
    int i, j;
    for (i=1; i<rows+1; i++){
        if (i%2==1){ 
        for (j=1; j<i+1; j++){
         
            printf( (j%2 == 0) ? "B" : "A");}

        }
        else {
            for (j=1; j<i+1; j++){
         
            printf( (j%2 == 0) ? "A" : "B");}
        }
        printf("\n");
    }
}

void printpattern2(int rows){
    
    for (int i=1; i<=rows; i++){
        for (int j=0; j<i; j++) ((j+i)%2==1) ? printf("A") : printf("B");
        printf("\n");
    }
}