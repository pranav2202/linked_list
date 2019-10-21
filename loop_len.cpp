#include <iostream>
#define nullptr NULL
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
class node{
	public:
	int data;
	node *next;
};
node* getnode(int data){
	node *t = new node();
	t->data = data;
	t->next = NULL;
	return t;
}
bool loopcheck(node **head){
	node *fast = (*head)->next;
	node *slow = *head;
	while(fast!=nullptr and fast->next !=nullptr){
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast) return true;
	}
	return false;

}
int count1(node *n){
	node *temp = n;
	int count=1;
			while(temp->next!=n){
				count++;
				temp=temp->next;
			}
			return count;
}
int lengthloop(node *head){
	node *fast = head;
	node *slow = head;
	while(slow!=NULL and  fast!=NULL and fast->next != NULL){
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast) 
		{	return count1(slow);
		}
	}
return 0;

}
int main(int argc, char** argv) {
	node *head = NULL;
	head = getnode(12);
	head->next = getnode(14);
	head->next->next = getnode(22);
	head->next->next->next = getnode(123);
	head->next->next->next->next = getnode(78);
		head->next->next->next->next->next = head->next;
		if (loopcheck(&head)) cout<<"yes"<<endl;
		else cout<<"no"<<endl;
		cout<<lengthloop(head)<<endl;
	return 0;
}
