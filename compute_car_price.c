#include <stdio.h>

int main(){

    float listp, disc, tax;
    int cat;

    printf("Please enter the list price\n");
    scanf("%f", &listp);

    printf("Pleaase enter the category of the car\n");
    scanf("%d", &cat);

    disc = 0.9*listp;

    if (disc>=100000)
        tax = disc*0.13;
    
    else
    tax = disc * 0.03;

    switch(cat){

        case 1:
        printf("Total price is $%.2f\n", 70000+tax+disc);
        break;

        case 2:
        printf("Total price is $%.2f\n", 80000+tax+disc);
        break;

        case 3:
        printf("Total price is $%.2f\n", 23000+tax+disc);
        break;

        case 4:
        printf("Total price is $%.2f\n", 600+tax+disc);
        break;

    }
    


}