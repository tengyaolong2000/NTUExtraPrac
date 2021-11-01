#include <stdio.h>   
#include <string.h>  
char *stringrChr(char *s, char ch);
int main()
{
   char s[80], c, *p;
   char *temp=NULL;
    
   printf("Enter a string: \n");
   fgets(s, 80, stdin);
   if (p=strchr(s,'\n')) *p = '\0';  
   printf("Enter a char: \n");
   scanf("%c", &c);     
   temp = stringrChr(s, c);  
   if (temp!=NULL)   
      printf("stringrChr(): %s\n", temp);    
   else  
      printf("stringrChr(): null string\n");
   return 0;
}
char *stringrChr(char *s, char ch){
    int len=0,j;
    while (s[len] != '\0')
        len++;

    for (j=len-1;j>=0;j--){
        if (*(s+j) == ch)
        return s+j;
    }
    return NULL;

}