#include <stdio.h>
void swapMinMax1D(int ar[], int size);
int main()  
{
   int ar[50],i,size;
    
   printf("Enter array size: \n");
   scanf("%d", &size);
   printf("Enter %d data: \n", size);
   for (i=0; i<size; i++)  
      scanf("%d",ar+i);
   swapMinMax1D(ar, size);
   printf("swapMinMax1D(): ");
   for (i=0; i<size; i++)  
      printf("%d ",*(ar+i));  
   return 0;
}
void swapMinMax1D(int ar[], int size){
    int i, max, min, max_i=0, min_i=0;

    max=ar[0];
    min = ar[0];

    for (i=0; i<size;i++){
        if (ar[i] >= max){
            max = ar[i];
            max_i = i;
        }
        if (ar[i] <= min){
            min = ar[i];
            min_i = i;
        }


    }
   
    ar[min_i] = max;
    ar[max_i] = min;



  
}