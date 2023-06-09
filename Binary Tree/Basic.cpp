#include<iostream>
#include"bits/stdc++.h"
#include "Making_Tree.cpp"
using namespace std;

class node{
public:
    int data;
    node* right;
    node* left;
public:
    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;

    }
};
node* buildTree(node* root){
    cout<<"enter the data: ";
    int data;
    cin>>data;
    root = new node(data);
    if(data == -1)return NULL;
    cout<<endl;

    cout<<"enter the data for Left of "<< data<<endl;;
    root->left = buildTree(root->left);
    cout<<endl;
    cout<<"enter the data for right of "<<data<<endl;;
    root->right = buildTree(root->right);

    return root;


}
void LevelorderTraversal(node* root){
    queue<node*>q;
    if(root == NULL)return;
    q.push(root);
    while(!q.empty()){

        int size = q.size();
        while(size--){
            node* curr = q.front();
            cout<<curr->data<<" ";
            if(curr->left != NULL){
                q.push(curr->left);
            }
            if(curr->right != NULL){
                q.push(curr->right);
            }
            q.pop();
        }
        cout<<endl;
    }

}
void INORDER(node* root){
    INORDER(root->left);
    cout<<root->data;
    INORDER(root->right);


}
void preORDER(node* root){
    cout<<root->data;
    preORDER(root->left);

    preORDER(root->right);


}
void postORDER(node* root){
    postORDER(root->left);//check for NULL condition too;
    postORDER(root->right);
    cout<<root->data;


}


int main(){
    node* root = NULL;
    root =  buildTree(root);
    //LevelorderTraversal(root);
    MakeTree(root);



}
