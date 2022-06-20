//hollow full pyramid
#include <iostream>
using namespace std;
int main() {
   int n;
   cin>>n;
   for(int i = 1 ; i<=n ; i++){
	   if(i==n){
		   for(int j = 1;j<=n;j++){
			   cout<<"* ";
		   }
		   cout<<endl;
	   }
	   else{
		   //spaces
		   for(int j = 1 ; j<=(n-i);j++){
			   cout<<" ";
			   

		   }
		   cout<<"* "<<endl;
		   //stars
		   


	   }
       
   }

    return 0;
}