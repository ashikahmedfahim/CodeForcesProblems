#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int *a=new int[n];
    int *b=new int[n];
    int c1=0,c2=0;
    for(int i=0;i<n;i++){
       cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    bool flag=true;
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]){
           flag=false;
           if(b[i]==1){
            c1++;
           }
           if(a[i]==1){
            c2++;
           }
        }
    }
    if(flag){
        cout<<"-1";
    }
    else{
        if(c2==0){
             cout<<"-1";
        }
        else{
            bool result=true;
            int i=1;
            while(result){
               if(c2*i>c1){
                cout<<i;
                result = false;
               }
               i++;
            }
        }
    }

    return 0;
}
