#include <stdio.h>
#include <string.h>
#define INIT_VALUE 999
int findSubstring(char *str, char *substr);
int findSubstring2(char *str, char *substr);
int main()
{
   char str[40], substr[40], *p;  
   int result = INIT_VALUE;      
   printf("Enter the string: \n");
   fgets(str, 80, stdin);
   if (p=strchr(str,'\n')) *p = '\0';  
   printf("Enter the substring: \n");
   fgets(substr, 80, stdin);
   if (p=strchr(substr,'\n')) *p = '\0';  
   result = findSubstring2(str, substr);
   if (result == 1)
      printf("findSubstring(): Is a substring\n");
   else if ( result == 0)
      printf("findSubstring(): Not a substring\n");   
   else         
      printf("findSubstring(): An error\n");    
   return 0;
}
int findSubstring(char *str, char *substr){
    int i=0, j=0, k=0;
    while (str[i] != '\0'){
         k=i;
        
        while (str[k]==substr[j]){
            j++; k++;
            if (substr[j]=='\0') return 1;
        }
        j=0;
        i++;
    }
    return 0;
   
}


int findSubstring2(char *str, char *substr){
    
   char copy[50];

   for (int i=0; i< strlen(str)-strlen(substr);i++){
      
      strncpy(copy, str, strlen(substr));
      
      if (strcmp(substr, copy) == 0) return 1;

      else 
         str++;  
   }
   return 0;
}