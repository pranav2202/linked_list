#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class node{
	public:
	int data;
	node *next;
	node(int data){
		this->data = data;
		this->next = NULL;
	}
};
int getsize(node *head){
	int length = 0;
	node *temp=head;
	while(temp!=NULL){
		temp = temp->next;
		length++;
	}
	return length;
	
}
int getNthfromend(node *head,int n){
	//corner cases : case when code doesn't run
	int size = getsize(head);
	if (n>size){
		return -1;
	}
	//main case
	node *first = head;
	node *second = head;
	while(n--){
		first = first->next;
		
	}
	while(first !=NULL){
			first = first->next;
			second = second->next;
	}
	
	
return second->data;
}
//node *head = NULL;

int main(int argc, char** argv) {
							node *head = NULL;
							head = new node(1);
							head->next = new node(2);
							head->next->next = new node(3);
							head->next->next->next = new node(4);
							head->next->next->next->next = new node(5);
	int n=2;
	
	cout<<getNthfromend(head,n)<<endl;
	
	
	return 0;
}

