#include<iostream>
using namespace std;

int main(){
    int x=1440;
    int t,h,m;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>h>>m;
        int ans=x-(h*60+m);
        cout<<ans<<endl;
    }
    return 0;
}
