#include<iostream>
using namespace std;

int main(){
    int t,n;
    cin>>t;
    for (int z=0;z<t;z++){
        cin>>n;
        int *x=new int[n];
        int *y=new int[n];
        for(int l=0;l<n;l++){
            cin>>x[l]>>y[l];
        }
        for(int i=0;i<n-1;i++){
            for(int k=i+1;k<n;k++){
                    if(x[i]>x[k]){
                        int temp=x[i];
                        x[i]=x[k];
                        x[k]=temp;
                        int temp2=y[i];
                        y[i]=y[k];
                        y[k]=temp2;
                    }
            }
        }
        int k=1,b;
        for(int i=0;i<n;){
                b=i;
            if(x[i]==x[k]){
               while(x[i]==x[k]){
                    k++;
                }
                i=k;
            }
            else{
                i++;
                k++;
            }

            for(int l=b;l<k-1;l++){
                for(int m=l+1;m<k;m++){
                    if(y[l]>y[m]){
                        int temp=y[l];
                        y[l]=y[m];
                        y[m]=temp;
                    }
                }
            }
           }
           for(int i=0;i<n;i++){
            cout<<x[i]<<" "<<y[i]<<endl;
           }
           int f=0;
           for(int i=0;i<n;i++){
                if(y[i]<y[i+1]){
                   cout<<"NO"<<endl;
                   f=1;
                   break;
                }
           }
           if(f!=1){
                cout<<"YES"<<endl;
                int x1=x[0],y1=y[0];
                for(int m=0;m<n;m++){
                   while(x1!=0){
                    cout<<"R";
                   }
                   while(y1!=0){
                    cout<<"U";
                   }
                   x1=x[m+1]-x[m];
                   y1=y[m+1]-y[m];
                }
           }
           cout<<endl;

        }
    return 0;
}
