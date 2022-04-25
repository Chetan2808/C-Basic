//power of 2
#include <iostream>
using namespace std;

    bool isPowerOfTwo(int n) {
        int count = 0;
        if(n<=0){
                return false;
        }
        while(n!=0){
            
            
            if((n&1) == 1){
                count ++;
            }
            n= n>>1;
        }
        if(count == 1){
            return true;
        }
        else{
            return false;
        }
        
    }
int main(){
	int n ;
	cout<<"Input = ";
	cin>>n;
	if(isPowerOfTwo(n)){
		cout<<"True";
	}
	else{
		cout<<"False";
	}
}