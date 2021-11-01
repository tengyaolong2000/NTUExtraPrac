#include <stdio.h>
typedef struct {
   char name[20];  
   int age;
} Person;
void readData(Person *p);
Person findMiddleAge(Person *p);
int main()  
{
   Person man[3], middle;
      
   
   readData(man);
   middle = findMiddleAge(man);
   printf("findMiddleAge(): %s %d\n", middle.name, middle.age);
   return 0;
}
void readData(Person *p){
    int i;
    char dummy;

    for (i=0;i<3;i++){
    printf("Please enter the name for person %d:\n", i+1);
    scanf("%s",p[i].name);
    printf("Please enter the age\n");
    scanf("%d", &p[i].age);
    scanf("%c",  &dummy);
    }

}
Person findMiddleAge(Person *p){
    
    int i, max, min;
    min=max=p[0].age;
    for (i=1;i<3;i++){
        if (p[i].age>max) max=p[i].age;
        if (p[i].age<min) min=p[i].age;
    }
    for (i=0;i<3;i++){
        if (p[i].age != max && p[i].age != min){
        return p[i];
        

        }

    }
    return p[0];
}