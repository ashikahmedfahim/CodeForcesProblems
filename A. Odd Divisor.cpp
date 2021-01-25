#include<bits/stdc++.h>

using namespace std;

void check(long long int n){
    if(n%2!=0){
       cout<<"YES"<<endl;
       return;
    }
    int root = sqrt(n);
    if(root*root!=n){
        root+=1;
    }
    for(int i=1;i<=root;i++){
        long long int x= pow(2,i);
        if(n==x){
            cout<<"NO"<<endl;
            return;
        }
        else if(n<x){
            break;
        }
    }
    cout<<"YES"<<endl;
}

int main(){
    int t;
    long long int n;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        check(n);
    }
    return 0;
}
