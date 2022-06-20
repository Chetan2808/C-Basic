insert at head
#include iostream

using namespace std;
class Node{
    public
    int data;
    Node next;
    
    Node(int d){
        this-data=d;
        this-next=NULL;
        
    }
};
void insertAthead(Node &head,int d){
    step1 create
    Node newNode = new Node(d);
    step2 set the pointer to head node
    newNode - next = head;
    step3update head
    head= newNode;
}

int main()
{
    Node first = new Node(5);
    we created this head below so that the above first node pointer and the below head point to the same node 
    Node head = first;
    insertAthead(head,6);
    couthead- data     first-dataendl;
    couthead-next  first-nextendl;
    return 0;
}
