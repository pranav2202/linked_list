#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
class node{
	public:
		int data;
		node *next;
};
node *getnode(int data){
	node *newnode = new node();
	newnode->data = data;
	newnode->next = NULL;
	return newnode;
}
int iter(node *head){
	node *temp = head;
	int count=0;
	while(temp!=NULL){
		temp = temp->next;
		count++;
	}
	return count;
}
int recur(node *head){
	if (head == NULL) return 1;
	else return recur(head->next)+1;
}
void insert(node **head,int n){
	node *temp = new node();
	temp->data = n;
	temp->next = *head;
*head = temp;
return;
}


int main(int argc, char** argv) {
node *head = NULL;
for (int i = 0;i<6;i++){
	int te=0;
	cin>>te;
	insert(&head,te);
}
	cout<<recur(head)<<endl;
	return 0;
}
