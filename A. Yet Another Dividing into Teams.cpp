#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        int n;
        cin>>n;
        int *a=new int[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
         int x=0;
        for(int i=1;i<n;i++){
           if(a[i]-a[i-1]==1 || a[i]-a[i-1]==-1){
                x=1;
                break;
           }
        }
        if(x==1){
            cout<<"2"<<endl;
        }
        else{
            cout<<"1"<<endl;
        }
    }
}
