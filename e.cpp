#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        unsigned long long int x;
        cin>>x;
        bool run=true;
        int c=0;
        while(run){
            if(x%2==0){
                x=x/2;
                c++;
            }
            else{
                run=false;
            }
        }
        if(c%2==0){
           cout<<"First Box"<<endl;
        }
        else{
           cout<<"Second Box"<<endl;
        }
    }
    return 0;
}
