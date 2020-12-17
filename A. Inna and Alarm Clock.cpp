#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int *a=new int[n];
    int *b=new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
    }
    sort(a,a+n);
    sort(b,b+n);
    int h=1,v=1;
    for(int i=1;i<n;i++){
        if(a[i]!=a[i-1]){
            h++;
        }
        if(b[i]!=b[i-1]){
            v++;
        }

    }
    if(h<v){
        cout<<h;
    }
    else{
        cout<<v;
    }
    return 0;
}
