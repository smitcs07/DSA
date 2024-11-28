#include<iostream>
using namespace std;

int insertsorted(int arr[],int n,int key,int capacity){
if(n>=capacity)
return n;
arr[n]=key;
return (n+1);
}

int main(){
    int arr[10]={21,32,455,32,232,55},n=6,i,key=34,capacity=sizeof(arr);
    cout<<"Before Instruction: ";
    for(i=0;i<n;i++)
    cout<<arr[i]<<" ";
    n=insertsorted(arr,n,key,capacity);

    cout<<"\nAfter Insertion: ";
    for(i=0;i<n;i++)
    cout<<arr[i]<<" ";
}