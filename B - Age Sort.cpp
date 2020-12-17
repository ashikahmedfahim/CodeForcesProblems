#include<bits/stdc++.h>

using namespace std;

int main(){

    while(true){
        long long int n;
        cin>>n;
        if(n==0){
            return 0;
        }
        int *a=new int[n];
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        sort(a,a+n);
        for(int i=0;i<n;i++){
            if(i!=0){
                printf(" ");
            }
            printf("%d",a[i]);
        }
        printf("\n");
    }
    return 0;
}
