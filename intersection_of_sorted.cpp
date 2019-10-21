#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
class node{public:
	int data;
	node* next;
	
};
node *newnode(int data){
	node* n = new node();
	n->data = data;
	n->next = NULL;
	return n;
}
//utility functions
void push(node **head,int h){
	node *temp = newnode(h);
	temp->next = *head;
	*head = temp;
}
void printList(node *head){
	node *temp = head;
	while(temp!=NULL){
		cout<<temp->data<<" -> ";
		temp = temp->next;	
	}
	cout<<endl;
}
//main logic of function
node* getintersort(node *head1,node *head2){
	node *temp = NULL;
	node** last_ptr = &temp;
	while(head1!=NULL and head2!=NULL){
		if (head1->data == head2->data){
			push(&(*last_ptr),head2->data);
			last_ptr = &((*last_ptr)->next);
			head1 = head1->next;
			head2 = head2->next;
		}
		else if(head2->data > head1->data) {
			head1 = head1->next;
			
		}
		else {
			head2 = head2->next;
		}
	}
	return temp;
}
int main(int argc, char** argv) {
	node* a = NULL; 
    node* b = NULL; 
    node *intersect = NULL; 

    // First List: 1->2->3->4->5->6
    push(&a, 6); 
    push(&a, 5); 
    push(&a, 4); 
    push(&a, 3); 
    push(&a, 2); 
    push(&a, 1);                                    
	printList(a);
    // Second List: 2->4->6->8
    push(&b, 8); 
    push(&b, 6); 
    push(&b, 4); 
    push(&b, 2);                                     
     printList(b);     
    intersect = getintersort(a, b); 

    cout << "Intersection List:\n";
    printList(intersect);            

	return 0;
}
