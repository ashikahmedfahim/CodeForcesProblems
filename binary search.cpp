#include<bits/stdc++.h>

using namespace std;
int binarySearch(int *a,int low,int high,int value){
    if(low<=high){
        int mid=low+(high-low)/2;
        if(a[mid]==value){
            return mid;
    }
        else if(value<=a[mid]){

            return binarySearch(a,low,mid,value);
        }
        else{
            return binarySearch(a,mid+1,high,value);
        }
    }
    return -1;

}
int main(){
    int n;
    cin>>n;
    int *a=new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int value;
    cin>>value;
    cout<<binarySearch(a,0,n-1,value);
    return 0;
}
