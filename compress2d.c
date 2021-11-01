#include <stdio.h>
#define SIZE 100
void compress2D(int data[SIZE][SIZE], int rowSize, int colSize);
int main()  
{
   int data[SIZE][SIZE];
   int i,j;
   int rowSize, colSize;
   printf("Enter the array size (rowSize, colSize): \n");
   scanf("%d %d", &rowSize, &colSize);  
   printf("Enter the matrix (%dx%d): \n", rowSize, colSize);
   for (i=0; i<rowSize; i++)
      for (j=0; j<colSize; j++)
         scanf("%d", &data[i][j]);      
   printf("compress2D(): \n");
   compress2D(data, rowSize, colSize);
   return 0;
}
void compress2D(int data[SIZE][SIZE], int rowSize, int colSize){
    int i, j, num, total=0;

    for (i=0; i<rowSize; i++){
        num = data[i][0];
        total = 0;
        printf("%d ", num);
        for (j=0; j<colSize; j++){
            if (num==data[i][j]){
                total += 1;
                
            }
            else{
                printf("%d ", total);
                num = data[i][j];
                printf("%d ", num);
                total = 1;
            }
            
        }
        printf("%d", total);
        printf("\n");
    }

   
}