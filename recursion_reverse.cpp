//Code to print every number till n
#include <iostream>
using namespace std;
int reverse(int n){
    if(n==0){
        return 0;
    }
    cout<<n<<endl;
    return reverse(n-1);
}
int main() {
    // Write C++ code here
    int n;
    cout<<":Enter the number: ";
    cin>>n;
    cout<<"Printing in Decreasing order"<<endl;
    
    reverse(n);
    return 0;
}
