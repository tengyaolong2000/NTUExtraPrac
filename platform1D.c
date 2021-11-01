#include <stdio.h>
int platform1D(int ar[], int size);
int main()  
{
   int i,b[50],size;
   printf("Enter array size: \n");
   scanf("%d", &size);
   printf("Enter %d data: \n", size);
   for (i=0; i<size; i++)  
      scanf("%d",&b[i]);
   printf("platform1D(): %d\n", platform1D(b,size));
   return 0;
}
int platform1D(int ar[], int size){
   
   int i=0 ,j=1, max=0;

   for (i=0; i<size; i++){
       j=1;
       while (i<size && (ar[i]==ar[i+1])){
           i++;
           j++;
           
       }
       if (j > max) {max=j;}
       
   }

    return max;
}