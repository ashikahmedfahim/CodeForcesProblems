#include<bits/stdc++.h>

using namespace std;


int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        if(n<2020){
             cout<<"NO"<<endl;
        }
        else if(n%2020==0){
            cout<<"YES"<<endl;
        }
        else if(n%2021==0){
            cout<<"YES"<<endl;
        }
        else{
            int x=0;
            while(n>=2020){
                n-=2020;
                x++;
            }
            if(x>=n || n==0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}
