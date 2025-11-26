#include<stdio.h>
int main(){
    int num =150;
    int*ptr=&num;
    printf("Value of num:%d\n",num);
    printf("Value of num using ptr:%d\n",*ptr);
    printf("Value of ptr:%p\n",ptr);
    printf("Value of ptr using num:%p\n",&num);
}