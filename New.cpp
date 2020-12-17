#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int x=-1;
        string s,a;
        cin>>s;
        for(int k=0;k<s.length();k++){
            if(k==x){
                continue;
            }
            else if(s[k]!=s[k+1]){
                a=a+s[k];
            }
            else{
                x=k+1;
            }

        }
        int *b=new int[a.length()];
        for(int p=0;p<a.length();p++){
            char c=a[p];
            b[p]=c;

        }
        sort(b,b+a.length());
        string d;
        for(int p=0;p<a.length();p++){
            char c=b[p];
            if(p<1){
              d=d+c;
            }
            else{
                if(b[p]!=b[p-1]){
                    d=d+c;
                }
            }
        }
        cout<<d<<endl;
    }
    return 0;
}

