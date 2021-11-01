#include <stdio.h>

int main(){

    char cc;

    printf("Enter a chartacter, I will tell you if it is a digit or a letter\n");
    scanf(" %c", &cc);

    while (cc != '#'){

        if ((cc>='A' && cc<='Z') || (cc>='a' && cc <='z'))
        printf("This is a letter\n");

        else if (cc>='0' && cc <= '9')
        printf("This is a digit\n");

        else printf("Other Character\n");

        printf("Enter a character, I will tell you if it is a digit or a letter\n");
        scanf(" %c", &cc);

    }

    return 0;
}