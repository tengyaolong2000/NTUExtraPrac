#include <stdio.h>
#include <string.h>

void reverse(char*string);

int main(){

    char sentence[50];
    char*p;
    printf("Please enter the string to be reversed\n");
    fgets(sentence, 50, stdin);
    if (p=strchr(sentence, '\n')) *p='\0';

    while (strcmp(sentence, "END")  != 0){
        reverse(sentence);
        printf("Reversed sentence is: %s\n", sentence);
        printf("Please enter the string to be reversed\n");
        fgets(sentence, 50, stdin);
        if (p=strchr(sentence, '\n')) *p='\0';
        
    }

}

void reverse(char* string){
    char start; char* end;
    int length;
    char c;
    
    start = *string;
    length = strlen(string);
    end = string+length-1;


    while (string< end){
        start = *string;
        *string = *end;
        *end = start;

        string++;
        end--;

        

    }
}