#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m,c=0;
    cin>>n>>m;
    string *a=new string[n];
    int *b=new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        b[i]=0;
    }
    for(int i=0;i<n-1;i++){
       if(b[i]!=1){
         for(int k=i+1;k<n;k++){
            int c1=0,c2=m-1;
            cout<<a[i]<<" and "<<a[k]<<endl;
            while(a[i][c1]==a[k][c2] && c2>=0){
                cout<<a[i][c1]<<" "<<a[k][c2]<<endl;
                cout<<c1<<" "<<c2<<endl;
                c1++;
                c2--;
            }
            if(c2<=0){
                cout<<"working"<<endl;
                b[i]=1;
                b[k]=1;
                break;
            }
         }
         if(b[i]!=1 && c!=1){
            cout<<"working"<<endl;
            int c1=0,c2=m-1;
            while(a[c1]==a[c2] && c2>=c1){
               c1++;
                c2--;
            }
            if(c1-1==c2 || c1==c2){
                b[i]=1;
                c=1;
            }
         }
       }
    }
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans+b[i];
    }
    cout<<ans*m;


    return 0;
}
