//power of 2 another approach just do AND to n and n-1 for example 8 &7
#include <iostream>
using namespace std;

    bool isPowerOfTwo(int n) {
		if(n<=0){
			return false;
		}
		int ans = n & (n-1);
        if( ans == 0){
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