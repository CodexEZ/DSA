#include<bits/stdc++.h>

using namespace std;

class TreeNode{
    public:
    TreeNode* left;
    TreeNode* right;
    int data;
    TreeNode(){
        left = NULL;
        right = NULL;
    }
};
void inOrderTraversal(TreeNode* root){
    if(root == NULL){
        return;
    }
    inOrderTraversal(root->left);
    cout<<root->data<<" ";
    inOrderTraversal(root->right);
}
int main(){
    TreeNode *root, *node1, *node2 ,*node3, *node4, *node5;
    root->data = 1; root->left = node1; root->right = node2;
    node1->data = 2; node1->left = node3; node1->left = node4;
    node2->data = 3; node2->left = node5;
    node3->data = 4;
    node4->data = 5;
    node5->data = 6;

    inOrderTraversal(root);
}