#include "stdio.h"
#include "malloc.h"
#include "assert.h"
#include "string.h"
//断言

#define MAX_STRING_NUM 20

typedef char string[MAX_STRING_NUM];


typedef struct Person
{
    int age;
    string name;
} Person;


Person* CreatPersonClass(void){
    Person* person = (Person *)malloc(sizeof(Person));
    //assert(person != NULL);
    if(person == NULL){
        printf("person null");
        return NULL;
    }
    return person;
 }

Person* CreatPersonClassWithArgs(const int age, const string name){
    Person* person = CreatPersonClass();
    if(person == NULL){
        printf("person null");
        return NULL;
    }
    person -> age = age;
    strcpy(person -> name, name);
    return person;
}

int main(void){

//    Person jack = {.age = 15, .name="Jack"};

    Person* jack = CreatPersonClassWithArgs(18,"Jack"); 
    printf("the person msg is\n{age : %d, name : %s}\n",jack -> age, jack -> name);
    return 0;
}