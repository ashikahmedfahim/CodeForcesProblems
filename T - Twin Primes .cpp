#include<bits/stdc++.h>

using namespace std;
vector<int> a;
vector<int> b;

void prime(int n){
    int x=sqrt(n);
    if(n%2==0){
        return;
    }
    for(int i=3;i<=x;i=i+2){
        if(n%i==0){
            return;
        }
    }
    a.push_back(n);
}
void sch(){
    for(int i=0;i<a.size()-1;i++){
        if(a[i]+2==a[i+1]){
            b.push_back(i);
        }
    }
}
void print(int n){
    cout<<"("<<a[b[n-1]]<<", "<<a[b[n-1]]+2<<")"<<endl;
}

int main(){
    a.push_back(3);
    int n;
    cin>>n;
    for(int i=3;i<=100001;i+=2){
        prime(i);
    }
    sch();
    print(n);
    while(true){
        cin>>n;
        print(n);
    }
    return 0;
}
