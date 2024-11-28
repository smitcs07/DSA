#include<iostream>
using namespace std;

int increament(unsigned int n){
  if(n>0){
    increament(n-1);
      cout<<n<<"\n";
  }
  // else{
  //   return 0;
  // }
  return -1;
}

int main(){
  int n;
  cout<<"Enter the number till You want to print: ";
  cin>>n;
  increament(n);
  return 0;
}