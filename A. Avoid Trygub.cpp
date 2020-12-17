#include<iostream>
using namespace std;


int main(){
int t,n;
cin>>t;
for(int i=0;i<t;i++){
    int c=0;
    cin>>n;
    string a;
    cin>>a;
    for(int k=0;k<n;k++){
        if(a[k]=='b'){
            c++;
        }
    }
    while(c>0){
        cout<<"b";
        c--;
    }
    for(int k=0;k<n;k++){
        if(a[k]!='b'){
            cout<<a[k];
        }
    }
    cout<<endl;
}

return 0;
}
