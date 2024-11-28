#include<iostream>
using namespace std;

int increament(int n){
  if(n>0){
    cout<<"\n"<<n;
    increament(n-1);
  }
  return -1;
}

int main(){
  int n;
  cout<<"Enter the number till You want to print: ";
  cin>>n;
  increament(n);
  return 0;
}