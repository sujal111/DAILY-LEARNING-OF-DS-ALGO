#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node* left;
    struct Node* right;

}
void Node* createNode(int val){
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data=NULL;
    temp->left=temp->right=NULL;
    return temp;
}
int getSize(Node *root){
    if(root==NULL)
    return 0;
    else
    {
        return(size(node->left) + 1 + size(node->right));
    }
    int main()  
{  
    node *root = newNode(1);  
    root->left = newNode(2);  
    root->right = newNode(3);  
    root->left->left = newNode(4);  
    root->left->right = newNode(5);  
      
    cout << "Size of the tree is " << size(root);  
    return 0;  
}  
    
}