#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int *a=new int[n];
    int *b=new int[10];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<10;i++){
        cin>>b[i];
    }
    sort(a,a+n);
    sort(b,b+n);
    int x=100;
    for(int i=0;i<n;i++){
        for(int k=0;k<10;k++){
            if(a[i]>=b[k] && b[k]!=0){
                b[k]==0;
            }
            else{
                if(a[i]<=x){
                    x=a[i];
                }
            }
        }
    }
    if(x==100){
        cout<<10;
    }
    else{
        cout<<x;
    }

    return 0;
}
