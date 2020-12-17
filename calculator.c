#include<stdio.h>

int main(){
    int num1,num2,ans=0;
    char operatorChar;
    printf("Enter your numbers and operator in this format number operator number \n");
    scanf("%d %c %d",&num1,&operatorChar,&num2);
    if(operatorChar=='+'){
        ans=num1+num2;
    }
    else if(operatorChar=='-'){
        ans=num1-num2;
    }
    else if(operatorChar=='*'){
        ans=num1*num2;
    }
    else if(operatorChar=='/'){
        ans=num1/num2;
    }
    else{
        printf("Invalid format or wrong input\n");
    }
    printf("Your ans is : %d",ans);
    return 0;
}
