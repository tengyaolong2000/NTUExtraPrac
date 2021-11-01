#include <stdio.h>
int reverseDigits1(int num);
void reverseDigits2(int num, int *result);
int main()
{
   int num, result=999;
   printf("Enter a number: \n");
   scanf("%d", &num);      
   printf("reverseDigits1(): %d\n", reverseDigits1(num));
   reverseDigits2(num, &result);
   printf("reverseDigits2(): %d\n", result);
   return 0;
}
int reverseDigits1(int num){

    int result = 0;  

   while (num != 0){
       result += num%10;
       num /= 10;
       if (num != 0)
       result *= 10;


   }
   return result;
}
void reverseDigits2(int num, int *result){
    int resultt = 0;  

   while (num != 0){
       resultt += num%10;
       num /= 10;
       if (num != 0)
       resultt *= 10;


   }

   *result = resultt;

   
}