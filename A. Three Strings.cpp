#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        string a;
        string b;
        string c;
        cin>>a>>b>>c;
        int l=a.length();
        int ans=0;
        for(int k=0;k<l;k++){
            if(c[k]!=a[k] && c[k]!=b[k]){
                ans=1;
                break;
            }
        }
        if(ans==1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}
