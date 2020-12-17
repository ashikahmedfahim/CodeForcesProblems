#include<iostream>
#include<stdlib.h>
using namespace std;

//define a BST node
struct node{
    int data;
    node *left,*right;
};

node *root =NULL;

void insertData(int v){
    // create node
    node *newNode = new node;
    newNode->data = v;
    newNode->right = NULL;
    newNode -> left = NULL;

    // insert node
    node *parent = root;
    // find the parent where newNode will be added
    if(root == NULL){
        root = newNode;
        return;
    }
    while(true){
        cout<<"parent: "<<parent->data<<endl;
        if(parent->data > v){
            if(parent->left == NULL){
                parent->left = newNode;
                return;
            }
            parent = parent->left;
        }

        else if(parent->data < v){
            if(parent->right == NULL){
                parent->right = newNode;
                return;
            }
            parent = parent->right;
        }
        else{
            cout<<"\nDuplicated!!";
            return;
        }
    }
}


void visit_inorder(node* parent){
    if(parent != NULL){
        visit_inorder(parent->left);
        cout<<parent->data << " ";
        visit_inorder(parent->right);
    }
}

void deleteData(int v){
    // find location of v (curr)
    node* curr = root, *parent = NULL;
    while(true){
        if(curr->data < v){
            parent = curr;
            curr = curr->right;
        }
        else if(curr->data > v){
            parent = curr;
            curr = curr->left;
        }
        else break;
    }

    // check case 1 , 2 , 3
    //case 1: node with 0 child
    if(curr->left == NULL && curr->right == NULL){
        if(parent->right == curr)
            parent->right =NULL;
        else
            parent-> left = NULL;
    }

     //case 2:  node with one child
    else if(curr->left==NULL || curr->right==NULL){
        if(curr->left==NULL){
            if(parent->left=curr)
            {
                parent->left=curr->right;
            }
            else
                parent->right = curr->right;

        }
        else
        {
            if(parent->left=curr)
            {
                parent->left=curr->right;
            }
            else
                parent->right = curr->right;


        }
           } //case 3: node with two children
    else if(curr->left != NULL && curr->right != NULL){

                   node* ptr =curr;
                   while(ptr->right->right!=NULL){
                        if(ptr->right->right==NULL){

                            curr = ptr->right;
                            ptr->right = NULL;

                        }
                        ptr = ptr->right;

                   }
    }







}

bool searchData(int v){
    node *parent = root;
    if(root == NULL){
        cout<<"No data inserted"<<endl;
        return false;
    }
    while(true){
        if(parent->data > v){
            if(parent->left != NULL){
                parent = parent->left;
            }
            else{
                return false;
            }
        }
        else if(parent->data < v){
            if(parent->right != NULL){
                parent = parent->right;
            }
            else{
                return false;
            }
        }
        else{
            return true;
        }
    }
}


int main(){
    root = NULL;
    int n, item;
    cout<<"\nEnter n: ";
    cin>>n;

    for(int i=0; i<n; i++){
        item = rand()%100;
        cout<<"\nitem: "<<item<<endl;
        insertData(item);
    }

   // visit_inorder(root);

   // cout<<"\n\nEnter a number to delete: ";
   // cin>> item;

    // check all three cases
    //deleteData(item);
   // visit_inorder(root);

   ///Searching code here
    cout<<"\n\nEnter a number to search: ";
    cin>> item;
    if(searchData(item)){
        cout<<"Data Found"<<endl;
    }
    else{
        cout<<"Data Not Found"<<endl;
    }

    main();
}
