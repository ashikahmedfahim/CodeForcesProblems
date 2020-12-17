#include<bits/stdc++.h>
#include<cmath>
using namespace std;


int main(){
    long long int x;
    cin>>x;
    long long int c=0;
    while(x>0){
        if(x>=2){
            x=x-2;
            c=c+2;
            x--;
        }
        else{
            c++;
            x--;
        }
    }
    cout<<c;
    return 0;
}
