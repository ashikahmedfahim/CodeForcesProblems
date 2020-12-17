#include<iostream>
using namespace std;


int main(){
    int a;
    cin>>a;
    int *p=new int[a];
    for(int i=0;i<a;i++){
        cin>>p[i];
        if(p[i]==1){
            cout<<"HARD";
            return 0;
        }
    }
    cout<<"EASY";
    return 0;
}
