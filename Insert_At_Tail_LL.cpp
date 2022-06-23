
//insert at head
#include <iostream>

using namespace std;
class Node{
    public:
    int data;
    Node* next;
    
    Node(int d){
        this->data=d;
        this->next=NULL;
        
    }
};
void insertAtTail(Node* &tail,int d){
    //step1 create
    Node* newNode = new Node(d);
    //step2 set the pointer to new node
    tail -> next = newNode;
    //step3update tail
    tail= newNode;
}
void traverse(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data <<" ";
        temp = temp->next;
    }
}

int main()
{
    Node* first = new Node(5);
    Node* head = first;
    //we created this head below so that the above first node pointer and the below head point to the same node 
    Node* tail = first;
    insertAtTail(tail,4);
    insertAtTail(tail,3);
    insertAtTail(tail,2);
    insertAtTail(tail,1);
    insertAtTail(tail,9);
    insertAtTail(tail,8);
    insertAtTail(tail,7);
    insertAtTail(tail,6);
    traverse(head);
    
    return 0;
}

