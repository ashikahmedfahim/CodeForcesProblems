#include<iostream>
using namespace std;

int main(){
    int n,p,k,f1=0,f2=0;
    cin>>n>>p>>k;
    for(int i=1;i<=n;i++){
        if(i>=(p-k) || p-k<0){
            if(i<=(p+k)){
                if(i!=1 && f1==0 && (p!=1 && p-k>1)){
                    cout<<"<< ";
                    f1=1;
                }
                if(i==p){
                    cout<<"("<<p<<") ";
                }
                else{
                    cout<<i<<" ";
                }
                if(i!=n && f2==0 && i>=p+k){
                    cout<<">>";
                    f2=1;
                }
            }
        }
    }
}
