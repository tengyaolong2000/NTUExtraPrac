#include <stdio.h>
#include <string.h>
void maxCharToFront(char *str);
int main()  
{
   char str[80], *p;
    
   printf("Enter a string: \n");
   fgets(str, 80, stdin);
   if (p=strchr(str,'\n')) *p = '\0';  
   printf("maxCharToFront(): ");   
   maxCharToFront(str);  
   puts(str);
   return 0;
}
void maxCharToFront(char *str){

    int i = 0;
    char max = str[0], *j;
    while (*(str+i) != '\0'){
       if (*(str+i)>max){
           max = *(str+i);
           j = str+i;
       }
       i++; 
       }

    for(;j>str;j--){
        *j=*(j-1);
    }
    str[0]=max;

}