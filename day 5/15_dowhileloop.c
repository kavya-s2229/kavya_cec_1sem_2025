#include<stdio.h>
int main()
{ 
    int n;
    printf("Numbers from 1 to 10:");
    scanf("%d",&n);
    int i=1;
    do{
        printf("%d",i);
        i++;
    }
    while(i<=n);
}
        