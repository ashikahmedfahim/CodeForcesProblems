#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int temp=0;
        for(int j=1;j<=n;j++)
        {
            if(i%2!=0)
            {
                if(temp==0)
                {
                    cout<<"W";
                    temp=1;
                }
                else
                {
                    cout<<"B";
                    temp=0;
                }
            }
            else
            {
                cout<<"B";
            }
        }
        cout<<endl;
    }
}
