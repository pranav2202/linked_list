#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
class Node{public:
	int data;
	Node *next;
	Node(int data) {
            this->data = data;
            this->next = NULL;
        }
};
int getIntersectionNode (Node *head1,Node* head2){
	Node* p1=head1;
	Node* p2=head2;
	for (p1=head1;p1!=NULL;p1=p1->next){
		for (p2 = head2;p2!=NULL;p2=p2->next){
			if (p1 == p2) return p1->data;
		}
	} return 0;
}
int main(int argc, char** argv) {
	 /*  Create two linked lists        
        1st 10->15->30 
        2nd 3->6->9->15->30  
        15 is the intersection point  */
    Node* newNode; 
  
    // Addition of new nodes 
    Node* head1 = new Node(10);
    Node* head2 = new Node(3);
  
    head2->next = new Node(6); 
    head2->next->next = new Node(9); 
  
    newNode = new Node(15);
    head1->next = newNode; 
    head2->next->next->next = newNode; 
  
    newNode = new Node(30); 
    head1->next->next = newNode; 
    head2->next->next->next->next = newNode;

    head1->next->next->next = NULL;
    head2->next->next->next->next->next = NULL;
  
    cout << "The node of intersection is " 
         << getIntersectionNode (head1, head2) << ".\n";
    return 0;
	//return 0;
}
