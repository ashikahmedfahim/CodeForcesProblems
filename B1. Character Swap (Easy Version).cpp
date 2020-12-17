#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
    int t;
    cin>>t;
    for (int i=0;i<t;i++){
        int n,c=0;
        cin>>n;
        int *x=new int[n];
        string a,b;
        cin>>a>>b;
        for(int k=0;k<n;k++){
            if(a[k]!=b[k]){
                x[c]=k;
               c++;
               if(c>=3){
                break;
               }
            }
        }
        if(c==0){
            cout<<"YES"<<endl;
        }
        else if(c<3){
            if(a[x[0]]==a[x[1]] && b[x[0]]==b[x[1]]){
              cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
