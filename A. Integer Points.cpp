#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long int n,m,p,q;
        long long int a=0,b=0,c=0,d=0;
        cin>>n;
        for(int k=0;k<n;k++){
            cin>>p;
            if(p%2==0){
                a++;
            }
            else{
                b++;
            }
        }
        cin>>m;
        for(int k=0;k<m;k++){
            cin>>q;
            if(q%2==0){
                c++;
            }
            else{
                d++;
            }
        }
        cout<<a*c+b*d<<endl;
    }
}
