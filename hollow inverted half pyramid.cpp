//hollow inverted half pyramid
#include <iostream>
using namespace std;
int main() {
   int n;
   cin>>n;
   for (int i = 1 ; i<= n ; i++){
      if(i==1||i==n){
          for(int col=1;col<=n-i+1;col++){
              cout<<"*";
          }
          
      }
      else{
          cout<<"*";
          for(int col =1; col<=n-i-1;col++){
              cout<<" ";
              
          }
          cout<<"*";
      }
      cout<<endl;
   }

    return 0;
}