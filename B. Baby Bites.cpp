#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main(){
    int n,u,v=0,f,g=0,h=0,l=0,m=0,x=0;
    cin>>n;
    string a;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a!="mumble" && h!=1){
            h=1;
            m=1;
            stringstream geek(a);
            geek >> x;
            v=x;
        }
        if(l==1){
           v=v+g;
        }
        if(m>1 && l!=1){
            v++;
        }
        stringstream ss;
        ss << v;
        string str = ss.str();
        if(a==str && h==1){
            f=1;
            g++;
            m++;
            l++;
        }
        else if(a=="mumble"){
            f=1;
            g++;
        }
        else{
           f=0;
           break;
        }

    }
    if(f==1){
        cout<<"makes sense"<<endl;
    }
    else{
        cout<<"something is fishy"<<endl;
    }

    return 0;
}
