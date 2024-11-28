#include <iostream> 
using namespace std; 

int sum(int n){
  if(n<=1){
    return n;
  }
  else{
    return n+sum(n-1);
  }
} 
 
int main() 
{ 
  int n;
	cout <<"Enter the number to find sum: ";
  cin>>n; 
  cout<<sum(n);
	return 0; 
} 