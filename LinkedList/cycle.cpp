#include "D:\DSA\linklist.h"
#include<bits/stdc++.h>

using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

void vertTraversal(TreeNode* root, int x, map<int,vector<int>> mp){
    if(root == NULL)
        return
}

int main(){
    TreeNode* root; root->val = 3; root->left = new TreeNode(4); root->right = new TreeNode(2);
}