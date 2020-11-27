

#include<bits/stc++.h>
using namespace std;
strct Node{
    int data;
    Node *next;

};
void insertAfter(Node* prev_node,int data){
    if(prev_node==NULL)
    cout<<"the given node cannot be NULL";
    return ;

}
Node* new_node=new Node();
new_node->data=new_data;
new_node->next= prev_node->next;  
  
   
    prev_node->next = new_node;  
}  
  
  void printList (Node *node){
      while(node!=NULL){
           cout<<" "<<node->data;  
        node = node->next; 
      }
  }
int main(){
    Node* head=NULL;
    push(&head,1);
    cout<<"Created Linked list: "
      printlist(head);
      return 0;

}