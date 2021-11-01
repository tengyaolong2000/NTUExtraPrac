#include <stdio.h>

int main(){

    float salary, merit;

    printf("Please enter your salary\n");
    scanf("%f", &salary);
    printf("Please enter your merit\n");
    scanf("%f", &merit);

    if (salary > 799 || salary >= 700 && merit >= 20)
        printf("The grade is A\n");

    else if ((salary > 649) || (salary >= 600 && merit >= 10) || (salary >= 700 && merit <=19))
        printf("The grade is B\n");

    else if (salary>= 500)
    printf("The grade is C\n");

    return 0;
}