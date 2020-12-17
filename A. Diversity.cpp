#include<bits/stdc++.h>

using namespace std;

int main(){
    int k;
    string s;
    cin>>s;
    cin>>k;
    int c=0;
    int l=s.length();
    bool b[l];
    for(int i=0;i<l;i++){
        b[i]=false;
    }
    for(int i=0;i<l;i++){
        for(int k=0;k<l;k++){
           if(s[i]==s[k] && i!=k && (b[i]==false || b[k]==false)){
            b[i]=true;
            b[k]=true;
            c++;
           }
        }
    }
    if(l<k){
        cout<<"impossible";
    }
    else{
        if(c==0){
            cout<<"0";
        }
        else{
            if(l-c>k){
                cout<<"0";
            }
            else{
                cout<<k-(l-c);
            }
        }
    }
    return 0;
}
