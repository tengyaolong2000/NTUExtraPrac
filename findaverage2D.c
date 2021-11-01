#include <stdio.h>

void findaverage2D(float (*arr)[4]);

int main(){

    float matrix[4][4];
    int i, j;

    printf("Please enter the values for your 4x4 matrix\n");
    for (i=0; i<4; i++){
    for(j=0;j<4;j++)
    scanf("%f", &matrix[i][j]);
    }

    findaverage2D(matrix);

    printf("findaverage2D:\n");
    for (i=0; i<4; i++){
    for(j=0;j<4;j++)
    printf("%.2f ", matrix[i][j]);

    printf("\n");
    }


}

void findaverage2D(float (*arr)[4]){
    
    int i, j;
    float sum=0;

    for (i=0; i<4; i++){
    for (j=0;j<3;j++){
    sum += *(arr[i]+j);
    }
    *(*(arr+i)+3) = sum/3;
    sum=0;
    }

}