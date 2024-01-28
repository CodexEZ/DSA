#include<iostream>
#include<cstdlib>
using namespace std;

class Node{
    public:
    int data;
    Node* right;
    Node* left;
    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
Node* insert(Node* &root, int key){
    if (root==NULL){
        Node* temp = new Node(key);
        root = temp;
        return root;
    }
    if (key<root->data){
        root->left = insert(root->left,key);
    }
    else{
        root->right = insert(root->right,key);
    }
    return root;
}
void PreOrder(Node* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    PreOrder(root->left);
    PreOrder(root->right);
}
void PostOrder(Node* root){
    if(root == NULL){
        return;
    }
    PostOrder(root->left);
    PostOrder(root->right);
    cout<<root->data<<" ";
}
void Inorder(Node* root){
    if (root == NULL){
        return;
    }
    Inorder(root->left);
    cout<<root->data<<" ";
    Inorder(root->right);
}
void Search(Node* root, int key){
    if (root==NULL){
        cout<<"item not found"<<endl;
        return;
    }
    if(root->data == key ){
        cout<<"Item found at memory location : "<<root<<endl;
        return;
    }
    if(key<root->data){
        Search(root->left,key);
    }
    else{
        Search(root->right,key);
    }

}
int main(){
    Node* root = NULL;
    for(int i=0;i<100;i++){
        root = insert(root,rand()%1000);
    }
    cout<<"Inorder Traversal :";
    Inorder(root);
    cout<<endl;
    cout<<"Preorder Traversal :";
    PreOrder(root);
    cout<<endl;
    cout<<"Postorder Traversal :";
    PostOrder(root);
    cout<<endl;
    int key;
    cout<<"Enter the number you want to search :";
    cin>>key;
    Search(root,key);
}