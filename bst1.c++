// lowest common ancestor in a binary search tree  o(n),o(1)
#include<iostream>
using namespace std;
struct node{
    int data;
    node* left;
    node* right;
    node* parent;
};
node* lca(node* p,node* q){
    node* p1=p;
    node* q1 = q;
    while (p1 != q1)
    {
        p1 = (p1 == nullptr) ? q : p1->parent;
        q1 = (q1 == nullptr) ? p : q1->parent;
    }
    return p1;
}
int main(){
    node* root = new node{1, nullptr, nullptr, nullptr};
    node* node2 = new node{2, nullptr, nullptr, root};
    node* node3 = new node{3, nullptr, nullptr, root};
    node* node4 = new node{4, nullptr, nullptr, node2};
    node* node5 = new node{5, nullptr, nullptr, node2};
    root->left = node2;
    root->right = node3;
    node2->left = node4;
    node2->right = node5;

    node* p = node4;
    node* q = node5;
    node* ancestor = lca(p,q);
    if(ancestor != nullptr){
        cout<<"Lowest Common Ancestor: "<<ancestor->data<<endl;
    }
    else{
        cout<<"No common ancestor found."<<endl;
    }
}

