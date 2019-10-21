#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
class node{
	public:
		int data;
		node *next;
		
};
void insert(node **head,int n){
	node *temp = new node();
	{
		temp->data=n;
		temp->next = *head;
		*head=temp;
	}
}
int itersearch(node **head,int h){
//	if (head==NULL) return false;
	 {
		node *current = *head;
		int count=1;
			while(current!=NULL)
				{
				if (current->data == h) return count;
				else current = current->next ;count++;
				}
			return -1;
}
}
int main(int argc, char** argv) {
	node *head = NULL;
	insert(&head,12);
	insert(&head,13);
	insert(&head,14);
	insert(&head,15);
	if (itersearch(&head,149)) cout<<"yes"<<endl;
	else cout<<"no"<<endl;
	
	
	return 0;
}
