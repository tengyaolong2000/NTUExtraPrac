#include  <stdio.h>
int allOddDigits1(int num);  
void allOddDigits2(int num, int *result);     
int main()
{
   int number, p=999, result=999;
   printf("Enter a number: \n");
   scanf("%d", &number);
   p = allOddDigits1(number);
   if (p == 1)
      printf("allOddDigits1(): yes\n");
   else
      printf("allOddDigits1(): no\n");
   allOddDigits2(number, &result);
   if (result == 1)
      printf("allOddDigits2(): yes\n");
   else
      printf("allOddDigits2(): no\n");
   return 0;
}
int allOddDigits1(int num)  
{
   while (num != 0){
       if ((num%10)%2 == 0)
       return 0;

       num /= 10;

   }
   return 1;
}
void allOddDigits2(int num, int *result)  
{   
        *result = 1;
      while (num != 0){
       if ((num%10)%2 == 0){
       *result = 0;
       return;
       }

       num /= 10;

   }
}