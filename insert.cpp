#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
class node{
	public:
	int data;
	node *next;//store address of next node in linked list
};

node *head;//create a variable that will store address of first member of linked list and pointer to address . global variable
void insert(int n){
	node *temp = new node();//creating a node 
	temp->data = n;//variable temp storing address
	temp->next = head;//points to head's previous pointer to address                 
	//corner case when node is empty

	head = temp;//value in head stores address of temp in head new value
	
}
void print(){
	node *temp = head;
	while(temp!=NULL){
	
		cout<<temp->data<<" ";
			temp = temp->next;
	}
	cout<<endl;
}
int main(int argc, char** argv) {
	head = NULL;//ponter variable points nowhere i.e list is empty
	int n;
	cout<<"how many no.s"<<endl;
	cin>>n;
	for (int i = 0;i<n;i++){
		int x;
		cin>>x;
		insert(x);
		print();
	}
	return 0;
}
