#include<stdio.h>
#include<string.h>
struct employee{
    char name[20];
    int salary;
}
emp1,emp2;
int main(){
    strcpy(emp1.name,"kumuda");
    emp1.salary=100000;
    printf("Employee details:\n");
    printf("name:%s\n",emp1.name);
    printf("salary:%d\n",emp1.salary);


 strcpy(emp2.name,"keerthana");
    emp2.salary=200000;
    printf("Employee details:\n");
    printf("name:%s\n",emp2.name);
    printf("salary:%d\n",emp2.salary);
}

