#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
class node{
	public:
		int data;
		node* next;
		 node(int data) {
            this->data = data;
            this->next = NULL;
        }
};//if we add k in the function we get reverse till kth node
void reverse(node **head,int k){
	node* current = *head,*nex;
	node* prev = NULL;
	int count=k;
	while(current!=NULL  and count--){
		nex = current->next;
		current->next = prev;
		prev = current;
		current = nex;
		
	}
	*head = prev;
	return;
	
}
void push (node** head_ref, int new_data) {
    node* new_node = new node(new_data);
    new_node->next = *head_ref;
    *head_ref = new_node;
}

void printList(node* node) { 
    while (node != NULL) { 
        cout << node->data << " "; 
        node = node->next; 
    }
    cout << endl;
}

int main(int argc, char** argv) {
	node* head = NULL; 
  
    push(&head, 20); 
    push(&head, 4); 
    push(&head, 15); 
    push(&head, 85); 
  
    printf("Given linked list:\n"); 
    printList(head); 

    reverse(&head,3); 
    printf("\nReversed Linked list:\n"); 
    printList(head); 

	return 0;
}
