#include <stdio.h>
#include <math.h>
int main()  
{
   float a1, a2, b1, b2, c1, c2, x, y, denom;


   printf("Enter a1, b1, a2, b2, c1 and c2 sequentially\n");
   scanf("%f %f %f %f %f %f",&a1,&b1,&c1,&a2,&b2,&c2);

   denom = a1*b2-a2*b1;


   if (denom == 0)
   printf("Denominator is zero!\n");
   else {
       x = (b2*c1-b1*c2)/denom;
       printf("%.2f\n", x);

       y = (a1*c2-a2*c1)/denom;
       printf("%.2f\n", y);


   }


   return 0;
}