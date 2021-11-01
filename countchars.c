#include <stdio.h>

int main(){
   int num_digits, num_letters;
   char chara;
   
   num_digits = 0;
   num_letters = 0;

   printf("Please enter a character, type # to terminate\n");
   scanf("%c", &chara);

   while (chara != '#'){
       if (chara>='0' && chara <= '9'){
       num_digits += 1;
       }
       
       else if ((chara >= 'A' && chara <= 'Z') || (chara >= 'a' && chara <= 'z')){
       num_letters += 1;
       }
       
       
       printf("Please enter a character, type # to terminate\n");
       scanf(" %c", &chara);
   }

   printf("num digits: %d\n", num_digits);
   printf("num letters: %d\n", num_letters);
   
   return 0;
}