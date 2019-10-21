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
bool hasLong(node *head){
	if(head==NULL or head->next == NULL) return false;
	
	node *slow = head->next;
	node *fast = head->next->next;
	while(fast!=slow){
		if (fast==NULL or fast->next == NULL) return false;
		{
			fast = fast->next->next;
			slow = slow->next;	
		}
	}
	
}
void removeloop(node *head){
	
		if(head==NULL or head->next == NULL) return;
	
	node *slow = head->next;
	node *fast = head->next->next;
	while(fast!=slow){
		if (fast==NULL or fast->next == NULL) return;
		{
			fast = fast->next->next;
			slow = slow->next;	
		}
		//if reached here , slow and fast are k  nodes ahead of intersection point
		slow = head;
		while(slow!=fast){
			slow  = slow->next;
			fast = fast->next;
			//if reached her i know i am at the intersection point
			//fast->next =NULL;
			while(fast->next!=slow){
				fast = fast->next;
			}
			fast->next = NULL;
			
		}
	}
	
	
}
void printlist(node *head){
	node *temp = head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp= temp->next;
	}
	cout<<endl;
}
int main(int argc, char** argv) {
		node *head = NULL;
					head = new node(1);
					head->next = new node(2);
		         	head->next->next = new node(3);
						head->next->next->next = new node(4);
						head->next->next->next->next = new node(5);
	head->next->next->next->next->next = head;
	
		if (hasLong (head)) {
		cout<<"loop is detected"<<endl;
		    removeloop(head);
		}else cout<<"loop was not detected"<<endl;
	    printlist(head);
		
		
	return 0;
}
