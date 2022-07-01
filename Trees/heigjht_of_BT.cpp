#include<bits/stdc++.h>
using namespace std;
class node{
    public: 
    int data; 
    node* left;
    node* right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
int calcHeight(node* root){
    if(root==NULL)
    {
      return 0;
    }
    int lHeight=calcHeight(root->left);
    int rHeight=calcHeight(root->right);
    //takes o(n) tc
    return max(lHeight,rHeight)+1;

    
}
int32_t main(){
    node *root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);
    cout<<calcHeight(root);
}