#include <stdio.h>
#define PI 3.1416

int main(){
    int i, count;
    float radius, height;

    printf("Please enter the count:\n");
    scanf("%d", &count);

    for (i=0; i<count; i++){
        
        printf("Please enter the height\n");
        scanf("%f", &height);

        printf("Please enter the radius\n");
        scanf("%f", &radius);

        printf("The volume of the cylinder is %.2f\n", PI*radius*radius*height);
        printf("The surface area of the cylinder is %.2f\n", 2*PI*radius*radius+ 2*PI*radius*height);
    
    }

}