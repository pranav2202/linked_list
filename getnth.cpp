#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class node{
	public:
		int data;
		node *next;
};
void insert(node **head,int j)
{
	node *temp=new node();
	temp->data = j;
	 temp->next = *head;
	 *head = temp;
}
int getnth(node *head,int n){

	node *temp = head;
	while(n--){
		temp = temp->next;
	}
	return (temp->next->data);
	
}
int main(int argc, char** argv) {
	node *head = NULL;
	for (int i = 0;i<9;i++){
		int f=0;
		cin>>f;
		insert(&head,f);
	}
	cout<<getnth(head,1)<<endl;
	return 0;
}
