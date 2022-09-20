#include <iostream>
#include <deque>
using namespace std;
int main(){
    int n ; 
    cin>>n;
    int matrix[n][n];
    for(int i = 0 ; i<n ; i++){
        for(int j = 0 ; j<n ; j++){
            cin>>matrix[i][j];
        }}
        deque<int> Stack;
        for(int i = 0 ; i < n ; i++){
            Stack.push_back(i);
        }
        
        while(Stack.size()!=1){
            int top1 = Stack.front();
            Stack.pop_front();
            int top2 = Stack.front();
            Stack.pop_front();
            //this means if top1 knows top2 ; top1 cannot be celebrity
            if( matrix[top1][top2]== 1){
                Stack.push_front(top2);
            }
            else{
                Stack.push_front(top1);
            }
        }
        //it is very probable he is the celebrity 
        int last1 = Stack.front();
        bool isCeleb = true;
        //this loop is to check the rows and the columns
        for(int i = 0 ; i < n ; i++){
            if(i == last1){
                continue;
                
            }
            //checking the columns
            if(matrix[i][last1]==0){
                isCeleb = false;
            }
            if(matrix[last1][i]==1){
                isCeleb=false;
            }
            
        }
        if(isCeleb){
            cout<<"Celeb : "<<last1;
        }
        else{
            cout<<"No Celeb";
        }
    
}