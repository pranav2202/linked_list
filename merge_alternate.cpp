#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
class node{
	public:
	int data;
	node* next;
	
};
//utility functions
void push(node** head,int h){
	node *temp = new node();
	temp->data = h;
	temp->next = *head;
	*head = temp;
	
}
void printList(node *head){
	node* temp = head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<endl;
}
//main logic of function
void mergealter(node *p,node** q){
node *p_curr = p,*q_curr = *q;
node *p_next,*q_next;
		p_next = p_curr->next;
	q_next = q_curr->next;
	while(p_curr!=NULL and q_curr!=NULL){
		p_next = p_curr->next;
	q_next = q_curr->next;
		q_curr->next = p_next;
		p_curr->next = q_curr;
		p_curr = p_next;
		q_curr = q_next;
	}
	*q = q_curr;
}
int main(int argc, char** argv) {
	 node *p = NULL, *q = NULL;  
    push(&p, 3);  
    push(&p, 2);  
    push(&p, 1);  
    cout<<"First Linked List:\n";  
    printList(p);  
  
    push(&q, 8);  
    push(&q, 7);  
    push(&q, 6);  
    push(&q, 5);  
    push(&q, 4);  
    cout<<"Second Linked List:\n";  
    printList(q);  
  
   mergealter(p, &q);  
  
    cout<<"Modified First Linked List:\n";  
    printList(p);  
  
    cout<<"Modified Second Linked List:\n";  
    printList(q);  
	return 0;
}
