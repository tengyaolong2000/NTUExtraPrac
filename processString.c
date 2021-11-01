#include <stdio.h>
#include <string.h>
void processString(char *str, int *totVowels, int *totDigits);
int main()
{
   char str[50], *p;
   int totVowels, totDigits;
   printf("Enter the string: \n");
   fgets(str, 80, stdin);
   if (p=strchr(str,'\n')) *p = '\0';  
   processString(str, &totVowels, &totDigits);    
   printf("Total vowels = %d\n", totVowels);
   printf("Total digits = %d\n", totDigits);
   return 0;
}
void processString(char *str, int *totVowels, int *totDigits)
{
    *totVowels = 0, *totDigits = 0;
    int i = 0;
    while (*str != '\0')
    {
        if (48 <= *str && *str <= 57)
            ++*totDigits;
        if (*str == 65 || *str == 69 || *str == 73 || *str == 79 || *str == 85)
            ++*totVowels;
        if (*str == 97 || *str == 101 || *str == 105 || *str == 111 || *str == 117)
            ++*totVowels;
        str++;
        i++;
    }
    
}