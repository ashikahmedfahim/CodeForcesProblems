#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int *a = new int[n];
        for(int j=0;j<n;j++){
           cin>>a[j];
        }
        int temp = 0,c = 0;
        for(int j=0;j<n-1;j++){
           if(max(a[j],a[j+1])>(min(a[j],a[j+1])*2)){
                temp = min(a[j],a[j+1])*2;
                c++;
                while(temp * 2 < max(a[j],a[j+1])){
                    temp *= 2;
                    c++;
                }
           }
           else{
            temp = 0;
           }
        }
        cout<<c<<endl;

    }
    return 0;
}
