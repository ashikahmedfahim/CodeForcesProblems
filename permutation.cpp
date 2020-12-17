#include<bits/stdc++.h>

using namespace std;

void permute(string s,int i,int l){
    if(i==l){
        cout<<s<<endl<<endl;
    }
    else{
        for(int k=i;k<=l;k++){
            cout<<"working for "<<s[k]<<endl;
            swap(s[i],s[k]);
        cout<<"swapping "<<s[i]<< " with "<<s[k]<<endl;
        cout<<"sending permute "<<i+1<< " pos "<<endl;
            permute(s,i+1,l);
            cout<<"return "<<endl;
            swap(s[i],s[k]);
             cout<<"swapping "<<s[i]<< " with "<<s[k]<<endl;
        }
    }

}
int main(){
    string s;
    cin>>s;
    int l=s.length();
    permute(s,0,l-1);
    return 0;
}
