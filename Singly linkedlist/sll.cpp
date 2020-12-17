#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;


struct Node{
    string data;
    Node *next;
};
Node *root=NULL;


Node* createNode(){
    Node *n = new Node;
    cout<<"Enter Id like xx-xxxxx-x "<<endl;
    string x;
    cin>>x;
    n->data=x;
    n->next=NULL;
    return n;
}


void insertNode(){
    Node *n=createNode();
     Node *temp;
    if(root==NULL){
        root=n;
    }
    else{
      Node *CurrentNode = root;
      bool res=true;
      while(res){
        if(CurrentNode->data<n->data){
            if(CurrentNode->next!=NULL){
                temp=CurrentNode;
                CurrentNode=CurrentNode->next;
            }
            else{
                CurrentNode->next=n;
                res=false;
            }
        }
        else{
            if(n->data<root->data){
                root=n;
                root->next=CurrentNode;
                res=false;
            }
            else{
               n->next=CurrentNode;
               temp->next=n;
                res=false;
            }

        }
      }
    }
}
void show(){
    Node *CurrentNode = root;
    while(true){
        cout<<CurrentNode->data<<" ";
        if(CurrentNode->next==NULL){
            cout<<endl;
            break;
        }
        CurrentNode=CurrentNode->next;
    }

}

Node* searchNode(string x){
    Node *temp;
    if(root==NULL){
        cout<<"Insert Data first "<<endl;
        return NULL;
    }
    else{
        Node *PrevTemp=root;
        temp=root;
        bool res=true;
        while(res){
            if(temp->data==x){
                cout<<"Data Found"<<endl;
                return PrevTemp;
            }
            else{
                if(temp->next!=NULL){
                    PrevTemp=temp;
                    temp=temp->next;
                }
                else{
                    cout<<"Data Not Found"<<endl;
                    return NULL;
                }
            }
        }
    }
}

void deleteNode(){
    string x;
    cout<<"Enter Id "<<endl;
    cin>>x;
    Node *temp=searchNode(x);
    if(temp!=NULL && temp != root){
       Node *tempNext;
       tempNext=temp->next;
       if(tempNext->next!=NULL){
         tempNext=tempNext->next;
       }
       else{
        tempNext=NULL;
       }

       temp->next=tempNext;
       cout<<"Successful"<<endl;
    }
    else if(temp==root){
       if(root->next!=NULL){
        root=root->next;
        cout<<"Successful"<<endl;
       }
       else{
        root=NULL;
        cout<<"Successful"<<endl;
       }
    }
    else{
        cout<<"Not Successful"<<endl;
    }
}

void UpdateNode(){
    cout<<"Prev Data"<<endl;
    deleteNode();
    cout<<"New Data"<<endl;
    insertNode();
}
