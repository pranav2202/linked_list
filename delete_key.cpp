#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class node{
	public:
	int data;
	node* next;
	
};
void printList(node *head){
	node* temp = head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<endl;
}
void push(node **head,int h){
	node *temp = new node();
	temp->data =h;
	temp->next = *head;
	*head = temp;
	
}
void deletekey(node** head,int key){
	node* current = *head;
	node* temp = current->next;
	for(current=*head;current!=NULL,temp!=NULL;current= current->next){
		if (current->next->data == key){
			current->next = temp->next;
			delete temp;
		}
	}
}
int main(int argc, char** argv) {
	node* head = NULL;
	push(&head, 7); 
    push(&head, 1); 
    push(&head, 3); 
    push(&head, 2); 
  
    puts("Created Linked List: "); 
    printList(head); 
    deletekey(&head, 3); 
   // puts("\nLinked List after Deletion of 3: "); 
    printList(head); 
	return 0;
}
