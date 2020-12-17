#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin>>x;
    if(x%10!=0){
        int a=x%10;
        x=x/10;
        x=x*10;
        if(a>=5){
            x=x+10;
        }
    }
    cout<<x;
    return 0;
}
