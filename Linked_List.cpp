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

int main()
{
    Node* first = new Node(5);
    
    
    
    cout<<first->data<<endl;
    
    cout<<first->next<<endl;
    
    

    return 0;
}
