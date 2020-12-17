#include<iostream>

using namespace std;


int main(){

    int n;
    cin>>n;
    float *a= new float[n];
    float sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum=sum+a[i];
    }
    cout<<sum/n;

    return 0;
}
