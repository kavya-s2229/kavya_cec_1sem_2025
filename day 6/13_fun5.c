#include<stdio.h>
int sumofnatural(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=1;
    }
    return sum;
}

    int main(){
        int n;
        printf("Enter a number:");
        scanf("%d",&n);

        printf("sum=%d\n",sumofnatural(n));
        return 0;
    }




        
        
        
    