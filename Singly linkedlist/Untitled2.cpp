#include<iostream>

using namespace std;
class a{
public:
    int x;
    void setX(int val){
        x=val;
    }
};

class b{
public:
    int y;
    void setY(int val){
        y=val;
    }
};


int main(){
    bool x=true;
    while(x){
    cout<<"Enter 1 for a"<<endl;
    cout<<"Enter 2 for b"<<endl;
    cout<<"Enter 3 for exit"<<endl;
    cout<<"  --    --    --  "<<endl;
    int ans;
    cin>>ans;
    if(ans==1){
        a var;
        var.setX(5);
        cout<<"  working on class a  "<<endl;
    }
    else if(ans==2){
        b var;
        var.setY(5);
        cout<<"  working on class b  "<<endl;
    }
    else if(ans==3){
        x=false;
        }
    }

    return 0;
}


