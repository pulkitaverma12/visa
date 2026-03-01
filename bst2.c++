// check if the given binary tree is bst or not 
#include<iostream>
using namespace std;
struct node{
    int data;
    node* left;
    node* right;
    node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};
int main(){
    node* root = new node(10);
    root->left = new node(5);
    root->right = new node(15);
    root->left->left = new node(3);
    root->left->right = new node(7);
    root->right->right = new node(20);
    // check if the tree is bst or not
    bool isBST = true;
    // check if the left subtree is bst and the right subtree is bst
    if(root->left != NULL && root->left->data > root->data){
        isBST = false;
    }   
    if(root->right != NULL && root->right->data < root->data){
        isBST = false;
    }
    if(isBST){
        cout << "binary tree" << endl;
    }else{
        cout << "not" << endl;
    }
    return 0;
}