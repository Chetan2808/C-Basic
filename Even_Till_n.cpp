//even no till n
#include <iostream>
using namespace std;
void tilln(int n){
	
	for(int i = 2 ; i<=n;i=i+2){
		cout<<i<<endl;
	}
}
int main() {
	int n =15;
   	tilln(n);

    return 0;
}