#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int a,b,c,d,k,x,y;
        cin>>a>>b>>c>>d>>k;
        if(a<c){
            x=1;
        }
        else{
            x=a/c;
            if(a%c>0){
                x++;
            }
        }
        if(b<d){
            y=1;
        }
        else{
            y=b/d;
            if(b%d>0){
                y++;
            }
        }
        if(x+y>k){
            cout<<"-1"<<endl;
        }
        else{
            cout<<x<<" "<<y<<endl;
        }
    }
    return 0;
}
