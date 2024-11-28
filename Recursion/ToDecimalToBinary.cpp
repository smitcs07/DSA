/*
#include <iostream> 
using namespace std; 

int conversion(int n){
  if(n<=1){
    return n;
  }
  else{
    return n%2 + 10 * conversion(n/2);
  }
} 
 
int main() 
{ 
  int n;
	cout <<"Enter the number to convert Decimal to Binary: ";
  cin>>n; 
  cout<<conversion(n);
	return 0; 
} 
*/


// #include <iostream> 
// using namespace std; 

// int conversion(int n){
//   if(n>0){
//     return conversion(n/2);
//         cout<<n%2;
//   }
// } 
 
// int main() 
// { 
//   int n;
// 	cout <<"Enter the number to convert Decimal to Binary: ";
//   cin>>n; 
//   cout<<conversion(n); 
// } 