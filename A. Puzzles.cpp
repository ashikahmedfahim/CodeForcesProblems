#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int *a=new int[m];
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    sort(a,a+m);
    int c=m-n+1;
    int *b=new int[c];
    for(int k=0;k<c;k++){
        b[k]=a[(n-1)+k]-a[k];
    }
    sort(b,b+c);
    cout<<b[0];
    return 0;
}
