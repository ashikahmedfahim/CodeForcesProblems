#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long int n,d;
        cin>>n>>d;
        int k;
        bool z=false;
        if(d<=n){
            cout<<"YES"<<endl;
            z=true;
            continue;
        }
        for(k=1;k<=sqrt(d);k++){
            long long int x=d/(k+1);
            if(x*(k+1)!=d){
                x++;
            }
           if(k+x<=n){
                cout<<"YES"<<endl;
                z=true;
                break;
           }
        }
        if(!z){
            cout<<"NO"<<endl;
        }
    }
}
