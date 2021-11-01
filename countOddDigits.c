#include <stdio.h>

int countOddDigits1(int num);
void countOddDigits2(int num, int *result);
int main()
{
   int number, result;
    
   printf("Enter a number: \n");
   scanf("%d", &number);
   printf("countOddDigits1(): %d\n", countOddDigits1(number));
   countOddDigits2(number, &result);
   printf("countOddDigits2(): %d\n", result);
   return 0;
}
int countOddDigits1(int number)  
{   
   int count = 0;
   while (number != 0){
       if ((number%10)%2 == 1)
       count++;

       number /= 10;
   }
   return count;
}
void countOddDigits2(int number, int *count)  
{   
    int countt = 0;
   while (number != 0){
       if ((number%10)%2 == 1)
       countt++;

       number /= 10;
   }
   *count = countt;
}