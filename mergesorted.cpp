#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
class node{
	public:
	int data;
	node *next;
};
node *newnode(int data){
	node *n = new node();
	n->next = NULL;
	n->data = data;
	return n;
}
//utillity functions
void push (node **head,int f){
	node *temp = newnode(f);
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
//main driver program
node* mergesort(node* head1,node*head2){
	node* s;
	node* new_head = NULL;
	if (head1 == NULL) return head2;
	if (head2 == NULL) return head1;
	if(head1 and head2){
		if (head1->data > head2->data) {
		s = head2;
		head2 = s->next;
	}
	else {
		s = head1;
		head1= s->next;
	}
	}
	new_head = s;
	
	while(head1 and head2){
		if(head1->data<=head2->data){
			s->next = head1;
			s = head1;
			head1 = s->next;
		}
		else{
			s->next = head2;
			s = head2;
			head2 = s->next;
		}
		if(head1==NULL) s->next = head2;
		if (head2==NULL) s->next = head1;
	}
	return new_head;
	
}

int main(int argc, char** argv) {
	node *head1 = NULL;
	node *head2 = NULL;
	node *finalsort;
			head1 = newnode(10);
			head1->next = newnode(50);
			head1->next->next = newnode(70);
			head1->next->next->next = newnode(90);
			head1->next->next->next->next = newnode(100);
			printList(head1);
			head2 = newnode(20);
			head2->next = newnode(30);
			head2->next->next = newnode(40);
			head2->next->next->next = newnode(60);
			head2->next->next->next->next = newnode(80);
			printList(head2);
			
finalsort = mergesort(head1,head2);
	printList(finalsort);
	return 0;
}
