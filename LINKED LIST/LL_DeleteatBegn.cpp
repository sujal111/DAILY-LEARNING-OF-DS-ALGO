//DELETE HEAD OF A LINKEDLIST
#include <bits/stdc++.h> 
using namespace std; 
class Node 
{ 
	public: 
	int key; 
	Node* next; 
}; 

Node* removeFirstNode(struct Node* head){
    if(head==NULL)
    return NULL;
    Node* temp=head;
    head=head->next;
    delete temp;
    return head;



}
// Function to push node at head 
void push(struct Node** head_ref, int new_data) 
{ 
    struct Node* new_node = new Node; 
    new_node->data = new_data; 
    new_node->next = (*head_ref); 
    (*head_ref) = new_node; 
} 
  
// Driver code 
int main() 
{ 
    /* Start with the empty list */
    Node* head = NULL; 
  
    /* Use push() function to construct   
       the below list 8 -> 23 -> 11 -> 29 -> 12 */
    push(&head, 12); 
    push(&head, 29); 
    push(&head, 11); 
    push(&head, 23); 
    push(&head, 8); 
  
    head = removeFirstNode(head); 
    for (Node* temp = head; temp != NULL; temp = temp->next) 
        cout << temp->data << " "; 
  
    return 0; 
} 