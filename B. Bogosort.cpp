#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int *a=new int[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(n==1){
            cout<<a[0]<<endl;
            continue;
        }
        sort(a,a+n);
        reverse(a,a+n);
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}
