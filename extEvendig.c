#include <stdio.h>
#include <math.h>
#define INIT_VALUE 999
int extEvenDigits1(int num);
void extEvenDigits2(int num, int *result);
int main()
{
   int number, result = INIT_VALUE;
    
   printf("Enter a number: \n");
   scanf("%d", &number);
   printf("extEvenDigits1(): %d\n", extEvenDigits1(number));         
   extEvenDigits2(number, &result);
   printf("extEvenDigits2(): %d\n", result);
   return 0;
}
int extEvenDigits1(int num) {

    int count = 0, sum = 0;
   while (num != 0){

       if ((num%10)%2 == 0){
           sum += (num%10)*pow(10,count);
           count++;
       }
       num /= 10;
   }
   return count == 0 ? -1 : sum;
}
void extEvenDigits2(int num, int *result)  
{   
    int count = 0, sum = 0;
   while (num != 0){

       if ((num%10)%2 == 0){
           sum += (num%10)*pow(10,count);
           count++;
       }
       num /= 10;
   }

   if (count !=0)
   *result = sum;
   else *result = -1;
}