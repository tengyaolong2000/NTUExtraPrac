#include <stdio.h>
float power1(float num, int p);
void power2(float num, int p, float *result);
int main()
{
   int power;
   float number, result= 1;
    
   printf("Enter the number and power: \n");
   scanf("%f %d", &number, &power);
   printf("power1(): %.2f\n", power1(number, power));                           
   power2(number,power,&result);
   printf("power2(): %.2f\n", result);               
   return 0;
}
float power1(float num, int p){
float res = 1;

if (p == 0)
return 1;

else if (p<0){
    while (p++) 
    res /= num;
}

else{
    while (p--)
    res*= num;
}

return res;
}


void power2(float num, int p, float *result){
   if (p == 0)
*result =  1;

else if (p<0){
    while (p++) 
    *result /= num;
}

else{
    while (p--)
    *result *= num;
}


}

