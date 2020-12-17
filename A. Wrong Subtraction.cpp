#include<iostream>
#include<string.h>

using namespace std;

int main(){
    long long int n,k;
    cin>>n>>k;
    int a=n%10;
    if(a>=k){
        n=n-k;
        cout<<n;
        return 0;
    }
    else{
        for(int i=0;i<k;i++){
            a=n%10;
            if(a==0){
                n=n/10;
            }
            else{
                n--;
            }
        }
        cout<<n;
    }
    return 0;
}
