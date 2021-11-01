#include <stdio.h>
int gcd1(int num1, int num2);
void gcd2(int num1, int num2, int *result);
int main()
{
   int x,y,result= 1;       
   printf("Enter 2 numbers: \n");
   scanf("%d %d", &x, &y);
   printf("gcd1(): %d\n", gcd1(x, y));  
   gcd2(x,y,&result);
   printf("gcd2(): %d\n", result);       
   return 0;
}


int gcd1(int num1, int num2)  {
   int result;
   while (1){
       if (num1%num2 == 0)
       return num2;

       result = num1 % num2;
       num1 = num2;
       num2 =  result;



   }
}
void gcd2(int num1, int num2, int *result)  {

    while (1){
       if (num1%num2 == 0){
       *result = num2;
       break;
       }

       *result = num1 % num2;
       num1 = num2;
       num2 =  *result;

    }
   
}