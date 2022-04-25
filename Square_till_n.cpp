//quare of number till n
#include <iostream>
using namespace std;
void square(int n){
	for(int i = 1 ; i<=n;i++){
		cout<<i*i<<endl;
	}
}
int main() {
	int n ;
	cin>>n;
   	square(n);

    return 0;
}