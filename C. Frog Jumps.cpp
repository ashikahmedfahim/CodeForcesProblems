#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s="0";
        string p;
        cin>>p;
        s=s+p;
        int l=s.length();
        int k;
        bool *b=new bool[l];
        bool pos=false;
        for(int i=1;i<l;i++){
            if(s[i]=='R'){
               pos=true;
            }
        }
        if(!pos){
           cout<<l<<endl;
           continue;
        }
        for(int i=1;i<l;i++){
            for(int p=1;p<l;p++){
                b[p]=false;
            }
            k=i;
            while(k<l){
                if(b[k]==true){
                    break;
                }
                if(s[k]=='R'){
                    b[k]=true;
                    k=k+i;
                }
                else if(s[k]=='L'){
                    k--;
                }
                else{
                    break;
                }
            }
            if(k>=l){
                cout<<i<<endl;
                break;
            }
        }

    }
    return 0;
}
