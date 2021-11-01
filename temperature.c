#include <stdio.h>

int main(){
    
    float farenheit;
    
    printf("Enter degrees Farenheit and I will convert it to degrees Celsius\n");

    scanf("%f", &farenheit);

    while (farenheit != -1){
        printf("%f\n", ((5.0/9)*(farenheit - 32)));
        
        printf("Enter degrees Farenheit and I will convert it to degrees Celsius\n");
        scanf("%f", &farenheit);
    }

    return 0;


}