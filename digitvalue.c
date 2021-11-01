#include <stdio.h>
int digitValue1(int num, int k);
void digitValue2(int num, int k, int *result);
int main()
{
   int num, digit, result= 1;
    
   printf("Enter the number: \n");
   scanf("%d", &num);      
   printf("Enter k position: \n");
   scanf("%d", &digit);    
   printf("digitValue1(): %d\n",  digitValue1(num, digit));
   digitValue2(num, digit, &result);
   printf("digitValue2(): %d\n", result);    
   return 0;
}
int digitValue1(int num, int k){
    
    int i, mod=1;
    for (i=0;i<k;i++){
        mod *= 10;
    }
    return (num%mod)/(mod/10);
   
}
void digitValue2(int num, int k, int *result)  {
   int i, mod=1;
    for (i=0;i<k;i++){
        mod *= 10;
    }
    *result = (num%mod)/(mod/10);
}