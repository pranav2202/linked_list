#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class node{
	public:
	int data;
	node *next;
};
void insert(node **head,int d){
	node *temp = new node();
	temp->data = d;
	temp->next = *head;
	*head = temp;
	
		
}

int count1(node *head,int key){
	
if (head == NULL) {
return -1;}

 
else{

int count = count1(head->next,key);
if(key == head->data)
      count++;
}  
return count;

}
int main(int argc, char** argv) {
	node *head = NULL;
	insert(&head,12);
	insert(&head,12);
	insert(&head,13);
	insert(&head,15);
	insert(&head,13);
	insert(&head,16);
	cout<<count1(head,12)<<endl;
	return 0;
	
}
