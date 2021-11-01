#include <stdio.h>
#include <math.h>

int main(){
    
    int i, count;
    float x1, x2, y1, y2;

    printf("Please enter your count: \n");
    scanf("%d", &count);

    for (i=0; i<count; i++){
        
        printf("Enter first 2 coordinate values: \n");
        scanf("%f %f", &x1, &y1);

        printf("Enter second 2 coordinate values: \n");
        scanf("%f %f", &x2, &y2);

        printf("The distance is : %.2f \n", pow((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2),0.5));



    }


    return 0;
}