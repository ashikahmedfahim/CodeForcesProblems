#include<iostream>
#include<cmath>
#include<string>
using namespace std;

int st,ed,total;

static int a=0;

void num(int x){
    if(x/10!=0){
        a++;
        num(x/10);
    }
    else if(x>=0){
        a++;
    }
}

void fnd(char x){
    if(x=='4'){
        ed=(st+ed)/2;
    }
    else{
        st=((st+ed)/2)+1;
    }
    if(st==ed){
        cout<<ed;
    }
}

int power(int x){
    int b=pow(2,x);
    return(b);
}

int main(){
    int x;
    cin>>x;
    num(x);
    int m=power(a);
    int sum=0;
    if(a>1){
        for(int i=a-1;i>0;i--){
        sum=sum+power(i);
        }
    }
    total=sum+m;
    st=total-(total-sum)+1;
    ed=total;
    string s=to_string(x);
    for(int i=0;i<a;i++){
        fnd(s[i]);
    }
    return 0;
}
