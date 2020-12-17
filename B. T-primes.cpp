#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int pm(long long int x){
    int y=sqrt(x);
    for(int i=3;i<=y+1;i=i+2){
        if(x%i==0){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
}

int main(){
    int n;
    cin>>n;
    long long int *a=new long long int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]%2==0 && a[i]!=4 || a[i]==1){
            cout<<"NO"<<endl;
        }
        else if(a[i]==4){
            cout<<"YES"<<endl;
        }
        else{
            long long int b=sqrt(a[i]);
            long long int c=pow(b,2);
            if(c==a[i]){
               pm(b);
            }
            else{
                cout<<"NO"<<endl;
            }

        }
    }

    return 0;
}
