#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main(){

    int n;
    long long int l;
    cin>>n>>l;
    long long int *a =new long long int[n+2];
    a[0]=0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    a[n+1]=l;
    for(int i=0;i<=n+1;i++){
        cout<<a[i];
    }


    return 0;
}
