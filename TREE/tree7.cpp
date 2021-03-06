//LEVEL ORDER TRAVERSAL OF BINARY TREE

#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node* left;
    struct Node* right;


};
void Node* createNode(int val){
     struct node *temp = (struct node *)malloc(sizeof(struct node));
     temp->data=NULL;
     temp->left=temp->right=NULL;
     return temp;

}
int maxLevel=0;
void printLeft(Node *root,int level){
    if(root==NULL)
    return ;

    if(*max_level<level){
        cout << root->data << "\t"; 
        *max_level = level; 
    }
    leftViewUtil(root->left,level+1,max_level);
    leftViewUtil(root->right,level+1,max_level);
}
void leftView(node* root) 
{ 
    int max_level = 0; 
    leftViewUtil(root, 1, &max_level); 
} 
  
// Driver code 
int main() 
{ 
    node* root = newNode(12); 
    root->left = newNode(10); 
    root->right = newNode(30); 
    root->right->left = newNode(25); 
    root->right->right = newNode(40); 
  
    leftView(root); 
  
    return 0; 
} 