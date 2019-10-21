#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
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
node *getnode (int data){
	node *n = new node();
	n->next = NULL;
	n->data = data;
	return n;
}
node* reverse(node** head){
	node* current = *head;
	node* nex;
	node* prev = NULL;
		while(current !=NULL){
		nex =current->next ;
			current->next = prev;
			prev = current;
			current = nex;
		}
		*head = prev;
		return *head;
}
bool checkpalin(node* head1,node* head2){
	
node* temp1 = head1;
node* temp2 = head2;
while (temp1 && temp2) {
        if (temp1->data == temp2->data) {
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        else
            return false;
    }

    // If both temp1 and temp2 point to NULL now, 
    // it means the lists are equal.
    if (temp1 == NULL && temp2 == NULL)
        return true;
    
    // If reached here, means one list is NULL while
    // other is not.
    return false;
	
	
}
int main(int argc, char** argv) {
	node* head = NULL;
	node* head1 = NULL;
	head = getnode(1239);
	head->next = getnode(23);
	head->next->next = getnode(123);
 head1 = reverse(&head);
	printList(head1);
	 if (checkpalin(head,head1))cout<<"palindrome"<<endl;
	 else cout<<"no"<<endl;
	return 0;
}
