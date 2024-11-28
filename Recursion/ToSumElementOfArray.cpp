/*
#include <iostream> 
using namespace std; 

int sum(int arr[],int start,int length){
   if(start==length)
   return 0;
   else{
    return arr[start] + sum(arr,start + 1,length);
   }
} 
 
int main() 
{ 
  int arr[6]={1,2,3,4,5,6};
  int length=sizeof(arr)/sizeof(arr[0]); 
  cout<<sum(arr,0,length);
	return 0; 
} 
*/