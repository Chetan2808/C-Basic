//check a number is prime or not
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i =2;
    if(i<n){
        while(n%i==0){
            cout<<"NOT PRIME"<<endl;
            break;
        }
        i++;
    }
    else{
        cout<<"Prime"<<endl;
    }

    return 0;
}
