#include <iostream>
using namespace std;
int reverse(int n){
    
    if(n==0){
        return 0;
    }
    cout<<n<<" ";
    reverse(n-1);
    cout<<n<<" ";
    
}
/*void front(int n){
    
    if(n==0){
        return;
    }
    
    front(n-1);
    cout<<n<<" ";
}*/
int main() {
    // Write C++ code here
    int n;
    cout<<":Enter the number: ";
    cin>>n;
    cout<<"Printing in Decreasing and increasing order"<<endl;
    
    reverse(n);
    //front(n);
    
   
    return 0;
}