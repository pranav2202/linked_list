#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
class node{
	public:
	int data;
	node *next;
};
int s;
node* getnode(int data){
	node *newnode = new node();
	newnode->data = data;
	newnode->next = NULL;
	return newnode;
}
void insert( node** current,int n,int pos){
//	node *temp = getnode(n);
	if (pos<1 or pos>s+1){
		cout<<"enter a valid index"<<endl;
		
	}
	else {
		while(pos--){
			cout<<"\nthe pos"<<pos<<endl;
			if (pos == 0){
			node* temp = getnode(n);
				temp->next = *current;
				*current = temp;
				cout<<"the current data is "<<(*current)->data<<endl;
			}
			else {
				current = &(*current)->next;
			}
		}
	}
	
}
void print(node *head){
	node *temp  = head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<endl;
}


int main(int argc, char** argv) {
	node *head = NULL;
	head = getnode(1);
	head->next = getnode(22);
	head->next->next = getnode(124);
	head->next->next->next = getnode (34);
	int n;
	cout<<"enter the no you want to insert"<<endl;
	s = 4;
	cin>>n;
	int k;
	cout<<"enter the position you want to insert"<<endl;
	cin>>k;
	cout<<"the list before insert"<<endl;
	print(head);
	insert (&head,n,k);
	cout<<"the list after insertion"<<endl;
	print (head);
	return 0;
}
