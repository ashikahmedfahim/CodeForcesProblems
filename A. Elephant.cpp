#include<bits/stdc++.h>

using namespace std;

int main(){
    int x;
    cin>>x;
    int c = 0;
    for(int i=5;i>0;i--){
        if(x%i>=0 && x/i > 0){
            c += x / i;
            x = x % i;
        }
    }
    cout<<c<<endl;
    return 0;
}
