#include<iostream>
#include"sll.cpp"
using namespace std;

int main(){
    while(true){
        cout<<endl<<" **   ---   Menu   ---   ***"<<endl<<endl;
       cout<<"   Enter 1 to insert Data"<<endl;
       cout<<"   Enter 2 to Update Data"<<endl;
       cout<<"   Enter 3 to Delete Data"<<endl;
       cout<<"    Enter 4 to show Data"<<endl;
      cout<<"    Enter 5 to search Data"<<endl;
       cout<<"      Enter 6 to Exit"<<endl;
       int x;
       cin>>x;
       if(x==1){
        insertNode();
       }
       else if(x==2){
        UpdateNode();
       }
       else if(x==3){
        deleteNode();
       }
       else if(x==4){
        show();
       }
       else if(x==5){
        string x;
        cout<<"Enter Id to search"<<endl;
        cin>>x;
        searchNode(x);
       }
       else if(x==6){
        break;
       }
       else{
        cout<<"Wrong input"<<endl;
       }
    }
    return 0;
}
