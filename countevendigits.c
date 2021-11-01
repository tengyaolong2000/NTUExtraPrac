#include <stdio.h>
int countEvenDigits1(int number);
void countEvenDigits2(int number, int *count);
int main()
{
   int number, result;
    
   printf("Enter a number: \n");
   scanf("%d", &number);
   printf("countEvenDigits1(): %d\n", countEvenDigits1(number));
   countEvenDigits2(number, &result);
   printf("countEvenDigits2(): %d\n", result);
   return 0;
}
int countEvenDigits1(int number)  
{   int rem=0, count=0;
   while (number >0){
       rem = number%10;
       if (rem%2==0){
           count++;
       }

       number /= 10;
   }
   return count;
}
void countEvenDigits2(int number, int *count)  
{   
   int rem=0, countt=0;
   while (number >0){
       rem = number%10;
       if (rem%2==0){
           countt++;
       }

       number /= 10;
   }
   *count = countt;
}