#include <stdio.h>

float pay(float hours);
float tax(float pay);

int main(){

    float hours, paym, taxp, net;

    printf("Please enter the number of hours worked\n");
    scanf("%f", &hours);

    paym = pay(hours);
    taxp = tax(paym);
    net  = paym - taxp;

    printf("Gross Pay: %f, Tax: %f, Net: %f\n", paym, taxp, net);



}

float pay(float hours){

    float paid;

    if (hours>40)
    paid = 40*6.0 +9.0*(hours-40);

    else
    paid = 6.0*hours;

    return paid;

}

float tax(float pay){

    float tax;

    if (pay > 1500)
    tax = 1000*0.1+500*0.2+(pay-1500)*0.3;

    else if (pay >1000)
    tax = 1000*0.1 + (pay-1000)*0.2;

    else
    tax = 0.1*pay;

    return tax;


}