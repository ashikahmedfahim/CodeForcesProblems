#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int *a=new int[5];
        for(int i=0;i<5;i++){
           cin>>a[i];
        }
        sort(a,a+5);
        cout<<a[3]*a[4]<<endl;
    }
    return 0;
}
