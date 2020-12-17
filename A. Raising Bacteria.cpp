#include<bits/stdc++.h>

using namespace std;


#define ll long long int

int main(){
    ll x;
    cin>>x;
    ll c=0;
    while(x>0){
        c=c+x%2;
        x/=2;
    }
    cout<<c;
    return 0;
}
