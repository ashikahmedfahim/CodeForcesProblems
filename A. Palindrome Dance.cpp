#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,a,b;
    cin>>n>>a>>b;
    int *x=new int[n];
    for(int i=0;i<n;i++){
        cin>>x[i];
    }
    int p=0,q=n-1;
    int ans=0;
    while(p<n/2){
        if(x[p]==x[q]){
            p++;
            q--;
        }
        else{
            if(x[p]==2){
                if(q==0){
                    ans=ans+a;
                }
                else{
                   ans=ans+b;
                }
            }
            else if(x[q]==2){
                if(p==0){
                    ans=ans+a;
                }
                else{
                   ans=ans+b;
                }
            }
            else{
                cout<<"-1";
                return 0;
            }
            p++;
            q--;
        }
    }
    if(n%2==1){
        int z=(n/2);
        if(x[z]==2){
            if(a<b){
                ans=ans+a;
            }
            else{
                ans=ans+b;
            }
        }
    }
    cout<<ans;
    return 0;
}
