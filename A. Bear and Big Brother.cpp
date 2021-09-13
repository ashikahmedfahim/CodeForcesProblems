#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int i=1;
    a = a * 3 * i;
    b = b * 2 * i;
    while(a<=b){
        i++;
        a = a * 3 * i;
        b = b * 2 * i;
    }
    cout<<i<<endl;
    return 0;
}
