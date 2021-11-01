#include <stdio.h>
#include <math.h>

int main(){

    float current, resistance;
    int i, count;

    printf("Please enter the count");
    scanf("%d", &count);

    for (i=0; i<count; i++){
        printf("Please enter the current: \n");
        scanf("%f", &current);

        printf("Please enter the resistance: \n");
        scanf("%f", &resistance);

        printf("Power loss is : %.2f", pow(current,2)*resistance );
    }
}