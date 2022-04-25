//quare of number till n (factorial till 12)
#include <iostream>
using namespace std;
void factorial(int n){
	int fact =1;
	for(int i = 1 ; i<=n ; i++){
		fact = i*fact;
	}
	cout<<fact;
}
int main() {
	int n ;
	cin>>n;
   	factorial(n);

    return 0;
}
