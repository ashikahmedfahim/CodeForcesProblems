#include<stdio.h>

void checkEven(int x){
    if(x%2==0){
        printf("%d\n",x);
    }
}
int main(){
    for(int i=0;i<=100;i++){
        checkEven(i);
    }
    return 0;
}
