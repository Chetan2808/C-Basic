//complement of a number
#include <iostream>
using namespace std;
int findComplement(int num) {
        int mask = 0;
        while(mask<num){
            mask = (mask<<1)|1;
        }
        int ans = (~num) & mask;
        return ans;
    }
int main(){
	int num;
	cout<<"Enter the number";
	cin>>num;

    cout<<"the compliment of number = "<<findComplement(num);
};