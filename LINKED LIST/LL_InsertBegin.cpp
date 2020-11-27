#include<bits/stdc++.h>
using namespace std;
struct class{
    public:
    int data;
    Node* next;
}
void push(Node**head_ref, int data)
{
    Node* new_node=new Node();
    new_node->data=new_data;
    new_node_>next=(*head_ref);
    *head_ref=new_node;
}

void printList(Node *node){
    while(node!=NULL){
         cout<<" "<<node->data;  
        node = node->next; 
    }
}
int main(){
    Node* head = NULL;
    push(&head, 1);  
      cout<<"Created Linked list: "
      printlist(head);
      return 0;
}