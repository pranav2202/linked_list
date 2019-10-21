#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class Node{
	public:
	int data;
	Node* next;
	Node (int x) {
        data = x;
        next = NULL;
    }
};
void push(Node** head_ref, int new_data) { 
    Node* new_node = new Node(new_data);
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

void printList(struct Node *node) { 
Node*temp = node;
    while (temp!=NULL) { 
       cout<<temp->data<<" ";
        temp = temp->next; 
    }
   cout<<endl;
}
void deletenode(Node* cur_ptr){
	Node* next1 = cur_ptr->next;
	cur_ptr ->data = next1->data;
	cur_ptr->next = next1->next;
delete next1;
}
int main(int argc, char** argv) {
	Node* head = NULL;
	push(&head,12);
		push(&head,33);
			push(&head,44);
				push(&head,55);
					push(&head,56);
						push(&head,123);
							printList(head);
						deletenode(head->next->next);
						printList(head);
	return 0;
}
