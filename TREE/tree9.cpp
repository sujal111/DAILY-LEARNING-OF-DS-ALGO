//MIN IN A BINARY TREE
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
// Binary Tree 
int findMin(Node* root) 
{ 
    // Base case 
    if (root == NULL) 
        return INT_MIN; 
  
    // Return maximum of 3 values: 
    // 1) Root's data 2) Max in Left Subtree 
    // 3) Max in right subtree 
    int res = root->data; 
    int lres = findMin(root->left); 
    int rres = findMin(root->right); 
    if (lres < res) 
        res = lres; 
    if (rres < res) 
        res = rres; 
    return res; 
} 
  
// Driver Code 
int main() 
{ 
    Node* NewRoot = NULL; 
    Node* root = new Node(2); 
    root->left = new Node(7); 
    root->right = new Node(5); 
    root->left->right = new Node(6); 
    root->left->right->left = new Node(1); 
    root->left->right->right = new Node(11); 
    root->right->right = new Node(9); 
    root->right->right->left = new Node(4); 
  
    // Function call 
    cout << "Minimum element is " << findMin(root) << endl; 
  
    return 0; 
} 
  