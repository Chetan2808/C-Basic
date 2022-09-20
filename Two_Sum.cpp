//Two Sum
#include <iostream>
#include <unordered_map>
using namespace std;
int main(){
    int arr[] = {1,2,34,5,6,7,89,0};
    int n = 8;
    int target = 3;
    unordered_map<int,int> mp;
    mp.insert({arr[0],0});
    for(int i = 1; i < n ; i++){
        if(mp.find(target-arr[i])!= mp.end()){
           cout<< i << " " << mp[target-arr[i]]; 
        }
        else{
            mp.insert({arr[i],i});
        }
    }
}