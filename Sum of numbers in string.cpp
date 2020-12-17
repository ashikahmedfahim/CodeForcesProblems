#include<iostream>
using namespace std;
string s;
int ans=0;
int c=0,k=0;

int zer(int x){
    cout<<"Working zer"<<endl;
    while(k>0){
        k--;
        cout<<"Working zer mul"<<endl;
        zer(x);
        return x*10;
    }
    return x;
}
int sum(int x,int y){
    cout<<x<<" "<<y<<endl;
    if(x>y){
        cout<<x<<" "<<y<<endl;
        cout<<"Working limit"<<endl;
        return 0;
    }
    else if(s[x]>=48 && s[x]<=57){
        cout<<"Working dig"<<endl;
        sum(x+1,y);
        if(s[x+1]>47 && s[x+1]<58 && x+1<=y){
            c++;
            k=c;
            ans=ans+s[x]*zer(1);
            cout<<"Working 10*x"<<endl;
        }
        else{
            ans=ans+s[x];
            c=0;
            cout<<s[x]<<endl;
            cout<<"Working x"<<endl;
        }
    }
    else{
       sum(x+1,y);
       cout<<"Working char"<<endl;
    }
}
int main(){
    int T;
    cin>>T;
    for(int i=0;i<T;i++){
        cin>>s;
        int p=s.length()-1;
        cout<<p<<endl;
        sum(0,p);
        cout<<ans<<endl;
    }
    return 0;
}
