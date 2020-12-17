#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    bool change=false;
    int l=s.length();
    if(l==1){
        cout<<"-1";
        return 0;
    }
    else{
        for(int i=0;i<l-1;i++){
            if(s[i]>s[i+1]){
                if(i!=0  && s[i+1]!=0){
                    swap(s[i+1],s[i]);
                    change=true;
                    break;
                }
            }
        }
    }
    if(change){
       for(int i=0;i<l;i++){
           cout<<s[i];
        }
    }
    else{
        cout<<"-1";
    }
    return 0;
}
