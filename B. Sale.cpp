#include<bits/stdc++.h>

using namespace std;

int main(){
    int m,n,c=0;
    cin>>m>>n;
    int *a=new int[m];
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        if(x<0){
            x=x*-1;
            a[i]=x;
            c++;
        }
        else{
            a[i]=0;
        }
    }
    sort(a,a+m);
    reverse(a,a+m);
    int ans=0;
    int p;
    if(c>=n){
        p=n;
    }
    else{
        p=c;
    }
    for(int i=0;i<p;i++){
        ans=ans+a[i];
    }
    cout<<ans;

    return 0;
}
