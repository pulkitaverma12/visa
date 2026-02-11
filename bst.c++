// lowest common ancestor of a binary tree o(n),o(n)
#include<iostream>
// #include "tree.h"
#include <unordered_set>
using namespace std;
struct bst{
    int data;
    bst* left;
    bst* right;
    bst* parent;
};
bst* lca(bst* p, bst* q){
    unordered_set<bst*>s;
    while( p != nullptr){
        s.insert(p);
        p = p->parent;
    }
    while( q != nullptr){
        if(s.find(q) != s.end()){
            return q;
        }
        q = q->parent;
    }
    // iska use nii h qki top root node answer hojyega null nii aayega
    return nullptr;
}
int main(){
    bst* root = new bst{1, nullptr, nullptr, nullptr};
    bst* node2 = new bst{2, nullptr, nullptr, root};
    bst* node3 = new bst{3, nullptr, nullptr, root};
    bst* node4 = new bst{4, nullptr, nullptr, node2};
    bst* node5 = new bst{5, nullptr, nullptr, node2};
    root->left = node2;
    root->right = node3;
    node2->left = node4;
    node2->right = node5;

    bst* p = node4;
    bst* q = node5;
    bst* ancestor = lca(p,q);
    if(ancestor != nullptr){
        cout<<"Lowest Common Ancestor: "<<ancestor->data<<endl;
    }
    else{
        cout<<"No common ancestor found."<<endl;
    }
}
