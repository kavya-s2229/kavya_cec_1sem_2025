#include <stdio.h>

int main() {
    int a = 10;
    int *ptr =&a; 
    printf("Before changing value of a:%d",a);
    *ptr=80;
    printf("After Changing value of a:%d\n",a);
    (*ptr)++;
    printf("After Changing value of a:%d\n",a);
}

  

 