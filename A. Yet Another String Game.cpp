#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        string s;
        cin>>s;
        int len = s.length();
        for(int j=0;j<len;j++){
            if(j%2==0){
                if(s[j]=='a'){
                    s[j]='b';
                }
                else{
                    s[j]='a';
                }
            }
            else{
                if(s[j]=='z'){
                    s[j]='y';
                }
                else{
                    s[j]='z';
                }
            }
        }
        cout<<s<<endl;
    }
    return 0;
}
