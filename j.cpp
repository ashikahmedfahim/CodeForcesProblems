#include<bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int  R,r;
        cin>>R>>r;
        if(R*R>(r*r)*2){
            cout<<"1"<<endl;
        }
        else{
            cout<<"2"<<endl;
        }
    }
    return 0;
}
