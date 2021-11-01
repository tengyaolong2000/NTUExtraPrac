#include <stdio.h>
#define INIT_VALUE 999
int extOddDigits1(int num);
void extOddDigits2(int num, int *result);
int main()
{
   int number, result = INIT_VALUE;
    
   printf("Enter a number: \n");
   scanf("%d", &number);
   printf("extOddDigits1(): %d\n", extOddDigits1(number));         
   extOddDigits2(number, &result);
   printf("extOddDigits2(): %d\n", result);
   return 0;
}
int extOddDigits1(int num)  
{   
   int power=1, sum=0;
   while (num!=0){
       if ((num%10)%2 == 1){
           sum += (num%10) * power;
           power *= 10;
       }
       num/= 10;

   }
   return power == 1 ?-1 : sum;
}
void extOddDigits2(int num, int *result)  
{       
      int power=1, sum=0;
      *result = -1;
   while (num!=0){
       if ((num%10)%2 == 1){
           sum += (num%10) * power;
           power *= 10;
       }
       num/= 10;

   }

   if (power != 1)
   *result = sum;
}