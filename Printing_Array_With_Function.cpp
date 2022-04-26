//printing array with function
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void printArray(int arr[], int size){
	for(int i = 0 ; i < size ; i++){
		cout<<arr[i]<<" ";
	}
}

int main() {
	// Your code goes here;
	int arr[15] = {1};
	printArray(arr , 15);
	return 0;
}