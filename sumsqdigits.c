#include  <stdio.h>
int sumSqDigits1(int num);    
void sumSqDigits2(int num, int *result);    
int main()
{
   int num, result;
   printf("Enter a number: \n");
   scanf("%d", &num);
   printf("sumSqDigits1(): %d\n", sumSqDigits1(num));
   sumSqDigits2(num, &result);
   printf("sumSqDigits2(): %d\n", result);
   return 0;
}
int sumSqDigits1(int num)  
{
   int sum = 0, rem = 0;

   while (num> 0){
       rem = num%10;
       sum += rem*rem;
        num/=10;
   }
   return sum;
   

}
void sumSqDigits2(int num, int *result)  
{   int sum = 0, rem = 0;
    while (num> 0){
       rem = num%10;
       sum += rem*rem;
        num/=10;
   }
   *result = sum;
   
}