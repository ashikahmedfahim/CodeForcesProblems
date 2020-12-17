#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long int p,l;
        cin>>p>>l;
        long long int x=p-l;
        vector<long long int> y;
        for(int k=1;k<=sqrt(x);k++){
            if(x%k==0){
                if(x/k>l && x/k!=k){
                    y.push_back(x/k);
                }
                if(k>l ){
                    y.push_back(k);
                }


            }
        }
        sort(y.begin(),y.end());
        cout<<"Case "<<i+1<<":";
        if(y.size()==0){
            cout<<" impossible";
        }
        else{
            for(int k=0;k<y.size();k++){
                cout<<" "<<y[k];
            }
        }
        cout<<endl;
    }
    return 0;
}
