#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
class node {
	public:
		int data;
		node *next;
};
node *getnode(int data){
	node *newnode= new node();
	newnode->data = data;
	newnode->next = NULL;
	return newnode;
}
void insertmid(node **head,int n){
	if (*head==NULL){
		*head = getnode(n);
	}
	else{
		node *temp = getnode(n);
	
	node *slow = *head;
	node *fast =(*head)->next;

	while(fast != NULL and fast->next != NULL){
		slow = slow->next;
		fast = fast->next->next;
	}
	temp->next = slow->next;
	slow->next = temp;
	
	
}
}
void print(node *head){
	node *temp = head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<endl;
}
int main(int argc, char** argv) {
	node *head = new node();
	head = getnode(88);
	head->next = getnode(12);
	head->next->next = getnode(56);
	head->next->next->next = getnode(99);
	head->next->next->next->next = getnode(77);
	head->next->next->next->next->next = getnode(123);
	print (head);
	insertmid(&head,34);
	print (head);
		insertmid(&head,34);
		print(head);
	return 0;
	
}
