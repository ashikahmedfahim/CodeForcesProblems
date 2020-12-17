#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    int l=s.length();
    for(int i=0;i<l;i++){
        if(s[i]=='1')
            s[i]='0';
        else
            s[i]='1';
    }
    cout<<s;
    return 0;
}
