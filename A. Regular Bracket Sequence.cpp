#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        string s;
        cin>>s;
        int len = s.length();
        if(len%2!=0){
            cout<<"NO"<<endl;
        }
        else{
            if(s[0]!= ')' && s[len-1] != '('){
                cout<<"YES"<<endl;
            }
            else{
                 cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}
