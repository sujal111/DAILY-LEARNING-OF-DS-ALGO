//Pre-Order traversal
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct node* left;
    struct node* right;

};
void node* createNode(int val){
     struct node *temp = (struct node *)malloc(sizeof(struct node));
     temp->data=NULL;
     temp->left=temp->right=NULL;
     return temp;

}
void preorder(struct node *root){
    if(root!=NULL)
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);

}
struct node* insertNode(struct node* node,int val){
    if (node == NULL) return createNode(val);
   if (val < node->data)
   node->left = insertNode(node->left, val);
   else if (val > node->data)
   node->right = insertNode(node->right, val);
   return node;
}
int main(){
    struct node *root =NULL;
    insertNode(root,1);
    insertNode(root,2);
    insertNode(root,2);
    cout<<"Pre-Order traversal of the Binary Search Tree is: ";
   preorder(root);
   return 0;
}

}