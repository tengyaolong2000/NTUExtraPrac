#include <stdio.h>
void specialNumbers1D(int ar[], int num, int *size);
int main()  
{
   int a[20],i,size=0,num;
    
   printf("Enter a number (between 100 and 999): \n");
   scanf("%d", &num);
   specialNumbers1D(a, num, &size);
   printf("specialNumbers1D(): ");
   for (i=0; i<size; i++)      
      printf("%d ",a[i]);  
   return 0;
}
void specialNumbers1D(int ar[], int num, int *size){
   int i, a, b,c;
   *size=0;
   for (i=100; i<=num; i++){
       a = i%10;
       b = (i/10)%10;
       c = i/100;

       if (a*a*a+b*b*b+c*c*c == i){
       *size += 1;
       ar[*size-1] = i;
       }


   }
}