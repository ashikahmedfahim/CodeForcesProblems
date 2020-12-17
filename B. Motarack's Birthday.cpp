#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        long long int *a=new long long int[n];
        long long int mi=9999999999,ma=0;
        long long int ans=0;
        long long int c=0;
        for(int k=0;k<n;k++){
            cin>>a[k];
        }
        for(int k=0;k<n;k++){
            if(a[k]!=-1){
                if(mi>=a[k]){
                    mi=a[k];
                }
                if(ma<=a[k]){
                    ma=a[k];
                }
                ans=ans+a[k];
                c++;
            }
        }
        long long int b=0;
        if(c!=0){
        b=ans/c;
        }
        long long int b2=b-mi;
        long long int b3=ma-b;
        b++;
        long long int b4=b-mi;
        long long int b5=ma-b;
        long long int p=0;
        for(int l=0;l<n-1;l++){
            if(a[l]!=-1 && a[l+1]!=-1){
               if(a[l]>a[l+1]){
                p=a[l]-a[l+1];
               }
               else{
                p=a[l+1]-a[l];
               }
            }
        }

        if(c==0){
           cout<<"0"<<" "<<"1"<<endl;
        }
        else{
            if((b2<b4 && b3<b4) || (b2<b5 && b3<b5)){
                if(b2>=b3 && b2>=p){
                    cout<<b2<<" "<<b-1<<endl;
                }
                else if(b3>=b2 && b3>=p){
                    cout<<b3<<" "<<b-1<<endl;
                }
                else{
                    cout<<p<<" "<<b-1<<endl;
                }
            }
            else{
                if(b4>=b5 && b4>=p){
                    cout<<b4<<" "<<b<<endl;
                }
                else if(b5>=b4 && b5>=p){
                    cout<<b5<<" "<<b<<endl;
                }
                else{
                    cout<<p<<" "<<b<<endl;

                }
            }
        }

    }
    return 0;
}
