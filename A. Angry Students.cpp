#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int l;
        cin>>l;
        string s;
        cin>>s;
        int a=0,p=0,n=0,c=0;
        for(int k=0;k<l-1;k++){
            char x=s[k];
            if(x=='A'){
                a=1;
            }
            x=s[k+1];
            if(x='P'){
                p=1;
            }
            else{
                p=0;
            }
            if(a==p){
                c++;
                a=1;
            }
            else{
                a=0;
            }
        }
        cout<<c<<endl;
        c=0;
    }
    return 0;
}

