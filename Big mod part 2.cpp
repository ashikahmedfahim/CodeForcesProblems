#include<iostream>

using namespace std;
int mod(long long int a,long long int b,int m){
    if(b==0){
        return 1;
    }
    else if(b%2==0){
        int ans=mod(a,b/2,m);
        return (ans*ans)%m;
    }
    else{
        return ((a%m)*mod(a,b-1,m)%m)%m;
    }
}
int main(){
    long long int a,b;
    int m,ans;
    while(cin>>a>>b>>m){
        ans=mod(a,b,m);
        cout<<ans<<endl;
    }
    return 0;
}
