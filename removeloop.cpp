#include <iostream>
using namespace std;
class node{public:
	int data;
	node *next;
};
node *newnode (int data){
	node *t = new node();
	t->data = data;
	t->next = NULL;
	return t;
}
void print(node *head){
	while(head!=NULL){
		cout<<head->data<<" ";
	}
	cout<<endl;
}
int main(int argc, char** argv){
	node *head = NULL;
	head = newnode(6);
	head->next = newnode(12);
	head->next->next = newnode(78);
	head->next->next->next = newnode(99);
	head->next->next->next->next = newnode(887);
	head->next->next->next->next->next = newnode(655);
	head->next->next->next->next->next = head->next->next;
	print(head);
	
	return 0;
}
