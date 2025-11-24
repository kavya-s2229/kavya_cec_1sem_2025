#include<stdio.h>
int main()
    { 
        int sum=0;
        for(int i=1;i<=20;i++){
            sum=sum+i;
        }
        printf("sum of first 10 natural number=%d",sum);
        return 0;
    }