#include<iostream>

using namespace std;

int BigMod(long long int a, long long int b,int m){
    int answer=1,remainder;
    remainder=a%m;
    while(b!=0){
        if(b%2==1){
            answer=(answer*remainder)%m;
        }
        remainder=(remainder*remainder)%m;
        b=b/2;
    }
    return answer;
}
int main(){
    long long int a,b;
    int m;
    cin>>a>>b>>m;
    int ans=BigMod(a,b,m);
    cout<<ans;
    return 0;
}
