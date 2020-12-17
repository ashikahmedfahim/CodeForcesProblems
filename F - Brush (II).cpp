#include<bits/stdc++.h>

using namespace std;


int main(){
    int t,p=1;
    scanf("%d",&t);
    while(p<=t){
      int n,w;
      scanf("%d %d",&n,&w);
      long long int x;
      long long int *y=new long long int[n];
      for(int i=0;i<n;i++){
        scanf("%lld %lld",&x,&y[i]);
      }
      sort(y,y+n);
      int i=0,c=1;
      int st=0,e=0+w;
      while(i<n){
        if(y[i]>=st && y[i]<=e){
            i++;
        }
        else{
            c++;
            st=i;
            e=i+w;
        }
      }
      printf("Case %d: %d\n",p,c);
      p++;
    }
    return 0;
}
