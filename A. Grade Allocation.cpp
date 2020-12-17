#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    for(int k=0;k<t;k++){
       int n,m;
       cin>>n>>m;
       int *a=new int[n];
       int ans=0;
       for(int i=0;i<n;i++){
            cin>>a[i];
            ans=ans+a[i];
       }
       if(ans>=m){
        cout<<m<<endl;
       }
       else{
        cout<<ans<<endl;
       }
    }
    return 0;
}
