#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long int n,g,b;
        cin>>n>>g>>b;
        if(n<=g){
            cout<<n<<endl;
            continue;
        }
        long long int ans=0,a1,a2;
        if(n%2==0){
           a1=(n/2)/g;
           a2=n-a1;
           ans=a1+(a2*b);
        }
        else{
            n++;
           a1=((n/2)/g);
           n--;
           a2=n-a1;
            ans=a1+(a2*b);
        }
        cout<<ans<<endl;
    }
    return 0;
}
