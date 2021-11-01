#include <stdio.h>
#include <string.h>
int longWordLength(char *s);
int main()  
{
   char str[80], *p;
    
   printf("Enter a string: \n");
   fgets(str, 80, stdin);
   if (p=strchr(str,'\n')) *p = '\0';    
   printf("longWordLength(): %d\n", longWordLength(str));     
   return 0;
}
int longWordLength(char *s){
   int max=0, i=0, indx=0;
   while (*(s+i) != '\0'){
       if (((s[i]<='Z') && (s[i] >='A')) || ((s[i]<='z') && (s[i]>='a'))){
           if (i-indx+1>=max) max = i-indx+1;     
       }
       else {indx=i+1;}
       i++;
   }
   return max;
}