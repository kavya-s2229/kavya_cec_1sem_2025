#include<stdio.h>

int sub(int num1,int num2);
int main(){
    int res1 =sub(2,2);
    int res2 =sub(22,29);
    int res3 =sub(50,60);
    int res4 =sub(20,30);
    printf("res1:%d\n",res1);
     printf("res2:%d\n",res2);
  printf("res3:%d\n",res3);
  printf("res4:%d\n",res4);
}
int sub(int num1,int num2){
    return num1-num2;
}