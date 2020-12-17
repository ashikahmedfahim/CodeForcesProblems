#include<iostream>

using namespace std;


int main(){
    int n,t;
    cin>>n>>t;
    int *a=new int [n-1];
    for(int i=0;i<n-1;i++){
        cin>>a[i];
    }
    bool flag=false;
    for(int i=0;i<n-1;){
        if(a[i]+i+1==t){
          flag=true;
        }
        else if(a[i]+i+1>t){
            break;
        }
        i=i+a[i];

    }
    if(flag){
       cout<<"YES";
    }
    else{
       cout<<"NO";
    }

    return 0;
}
