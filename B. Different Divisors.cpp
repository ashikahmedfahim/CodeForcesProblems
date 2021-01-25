//not solved TLE

#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int divFunction(long long int ans,int d){
    queue<int> divisors;
    int root = sqrt(ans);
    if(root*root!=ans){
        root+=1;
    }
    for(int i=1;i<=root;i++){
        if(ans%i==0){
            divisors.push(i);
            divisors.push(ans/i);
        }
    }
    int n = divisors.size();
    int *a = new int[n];
    for(int i=0;i<n;i++){
        a[i]=divisors.front();
        divisors.pop();
    }
    sort(a,a+n);
    int sameCount = 0;
    for(int i=0;i<n-1;i++){
        if(a[i]!=a[i+1]){
            if(a[i+1]-a[i]<d){
                return 0;
            }
        }
        else{
            sameCount++;
        }
    }
    int finalDivisors = n - sameCount;
    if(finalDivisors>=4){
        return ans;
    }
    else{
        return 0;
    }
}


int main(){
    int t,d;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>d;
        long long int ans = 6;
        while(true){
            long long int finalAns = divFunction(ans,d);
            if(finalAns!=0){
                cout<<finalAns<<endl;
                break;
            }
            else{
                ans++;
            }
        }
    }
    return 0;
}
