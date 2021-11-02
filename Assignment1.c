#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX 5

typedef struct{
 int nameCardID;
 char personName[20];
 char companyName[20];
} NameCard;

int compare(const void *p, const void *q);
void listNameCards(NameCard holder[MAX]);
void addNameCard(NameCard holder[]);
void removeNameCard(NameCard holder[]);
void getNameCard(NameCard holder[]);

int main(){

    int choice, i;
    NameCard holder[MAX];
    
    //fill array with default values
    for (i=0;i<MAX;i++){
        holder[i] = (NameCard) {-1, "\0", "\0"};
    }



    puts("NTU NAME CARD HOLDER MANAGEMENT PROGRAM:");
    puts("1: listNameCards()");
    puts("2: addNameCard()");
    puts("3: removeNameCard()");
    puts("4: getNameCard()");
    puts("5: quit");

    do{
        puts("Enter your choice:");
        scanf("%d", &choice);
        if (choice==5) return 0;
        switch(choice){
            case 1: printf("listNameCards():\n"); listNameCards(holder); break;
            case 2: printf("addNameCard():\n"); addNameCard(holder); break;
            case 3: printf("removeNameCard():\n"); removeNameCard(holder);  break;
            case 4: printf("getNameCard():\n"); getNameCard(holder); break;
        }

    }
    while(choice<5);
    return 0;

}

void listNameCards(NameCard holder[MAX]){
    int i, empty=1;


    if (holder[MAX-1].nameCardID == -1) {printf("The name card holder is empty\n"); return;}

    for(i=0;i<MAX;i++){
        if (holder[i].nameCardID == -1)
        continue;

        printf("nameCardID: %d\n", holder[i].nameCardID);
        printf("personName: %s\n", holder[i].personName);
        printf("companyName: %s\n", holder[i].companyName);
        
    }

}

void addNameCard(NameCard holder[]){
    int id,i;
    char *p;
    char person[20], company[20];


    printf("Enter nameCardID:\n");
    scanf("%d", &id);
    printf("Enter personName:\n");
    scanf("\n");
    fgets(person, 20, stdin);
    if (p=strchr(person, '\n')) *p = '\0';
    printf("Enter companyName:\n");
    fgets(company, 20, stdin);
    if (p=strchr(company, '\n')) *p = '\0';
    
    if (holder[0].nameCardID != -1) printf("The name card holder is full\n");
    else {
        //since MAX is only 5 in this case im too lazy to code binary search and will use linear search
        for (i=0;i<MAX;i++){ 
            if (id == holder[i].nameCardID){ 
            printf("The nameCardID has already existed\n"); 
            return;
            }
        }

        //since aray of structs are sorted, empty struct always at 0 index
        holder[0].nameCardID=id;
        strcpy(holder[0].personName,person);
        strcpy(holder[0].companyName,company);
        printf("The name card has been added successfully\n");
        
        //sort array with qsort from stdlib
        qsort(holder, MAX, sizeof(NameCard), compare);

    }

}

//define comparater function for qsort
int compare(const void *p, const void *q){
    NameCard *id1 = p;
    NameCard *id2 = q;
    if (id1->nameCardID > id2->nameCardID) return 1;
    else if (id1->nameCardID < id2->nameCardID) return -1;
    else return 0;
    
}

void removeNameCard(NameCard holder[]){
    
    char name[20], copy[20]="\0", *p;
    int i, j, empty=1;
    
    printf("Enter personName:\n");
    scanf("\n");
    fgets(name, 20, stdin);
    if (p=strchr(name, '\n')) *p='\0';
    
    for (i=0;name[i];i++) name[i] = tolower(name[i]);

   
    if (holder[MAX-1].nameCardID == -1) {printf("The name card holder is empty\n"); return;}

    for(i=0;i<MAX;i++){
        if (strcmp(holder[i].personName, "\0")!=0){
        strcpy(copy, holder[i].personName);
        for (j=0;copy[j];j++) copy[j] = tolower(copy[j]);
        }
        
        if (strcmp(copy, "\0") != 0 && strcmp(copy, name)==0){
            printf("The name card is removed\n");
            printf("nameCardID: %d\n", holder[i].nameCardID);
            printf("personName: %s\n", holder[i].personName);
            printf("companyName: %s\n", holder[i].companyName);

            holder[i].nameCardID = -1;
            strcpy(holder[i].personName,"\0");
            strcpy(holder[i].companyName,"\0");

            qsort(holder, MAX, sizeof(NameCard), compare);
            return;
        }

    }
    printf("The target person name is not in the name card holder\n");

}

void getNameCard(NameCard holder[]){

    char name[20], copy[20]="\0", *p;
    int i, j;
    
    printf("Enter personName:\n");
    scanf("\n");
    fgets(name, 20, stdin);
    if (p=strchr(name, '\n')) *p='\0';
    
    for (i=0;name[i];i++) name[i] = tolower(name[i]);

    for(i=0;i<MAX;i++){
        if (strcmp(holder[i].personName, "\0") != 0){
        strcpy(copy, holder[i].personName);
        for (j=0;copy[j];j++) copy[j] = tolower(copy[j]);
        }
        
        if (strcmp(copy, "\0") != 0 && strcmp(copy, name)==0){
            printf("The target person name is found\n");
            printf("nameCardID: %d\n", holder[i].nameCardID);
            printf("personName: %s\n", holder[i].personName);
            printf("companyName: %s\n", holder[i].companyName);
            return;

        }

    }
       printf("The target person name is not found\n");

}