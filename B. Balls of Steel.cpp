#include<iostream>

using namespace std;

int pos(int x){
    if(x<0){
        x=x*-1;
    }
    return x;
}

int main(){

int t,n,p;
cin>>t;

for(int i=0;i<t;i++){
    cin>>n>>p;
    int *a = new int[n];
    int *b = new int[n];
    int *c = new int[n];
    for(int k=0;k<n;k++){
        cin>>a[k]>>b[k];
        c[k]=1;
    }
    for(int l=0;l<n-1;l++){
        for(int m=l+1;m<l;m++){
            int y=a[l]-a[m];
            int z=b[l]-b[m];
            if(pos(y)+pos(z)>p){
                c[l]=0;
                continue;
            }
        }
    }
    int w=0;
    for(int k=0;k<n;k++){
        if(c[k]==0){
            cout<<"-1"<<endl;
            w=1;
            break;
        }
    }
    if(w==0){
        cout<<"1"<<endl;
        break;
    }
}

return 0;
}
