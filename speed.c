#include <stdio.h>

int main(){

    int i, count;
    float distance, time;

    printf("Please enter the number of times: \n");
    scanf("%d", &count);


    for (i=0;i<count;i++){
        
        printf("Please enter the distance (in km)\n");
        scanf("%.2f", &distance);

        printf("Please enter the time (in sec)\n");
        scanf("%f", &time);

        printf("The speed is : %.2f", distance/ time);

    }

    return 0;
}