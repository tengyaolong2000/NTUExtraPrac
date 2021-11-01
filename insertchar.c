#include <stdio.h>
#include <string.h>
void insertChar(char *str1, char *str2, char ch);
void insertChar2(char *str1, char *str2, char ch);
int main()  
{
   char a[80],b[80];
   char ch, *p;
    
   printf("Enter a string: \n");   
   fgets(a, 80, stdin);
   if (p=strchr(a,'\n')) *p = '\0';  
   printf("Enter a character to be inserted: \n");   
   ch = getchar();
   insertChar(a,b,ch);
   printf("insertChar(): ");   
   puts(b);      
   return 0;
}
void insertChar(char *str1, char *str2, char ch){
    int i=0, j=0;
    while (str1[i] != '\0'){
        if ((j-3)%4==0){
            
            if (j==0){str2[j] = str1[i];
            i++; j++;}
            else{
            str2[j]=ch;
            j++;
            }
        }
        else {
        str2[j] = str1[i];
        i++; j++;

        }
        str2[j] = '\0';

    }
  
}
void insertChar2(char *str1, char *str2, char ch){
int i,k=0;

while ( *str1!='\0' ) {

  for ( i=1; i <= 3 && *str1; i++ ){

     str2[k]=*str1;

     str1++;k++;

  }

  if (i==4) {

     str2[k]=ch;

     k++;

  }
}

str2[k]='\0';

}