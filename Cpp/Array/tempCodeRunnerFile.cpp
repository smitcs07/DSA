#include<iostream>
using namespace std;

int findElement(int arr[],int n,int size){
    for(int i=0;i<size;i++)
     if(arr[i]==n)
     return (i);
    return -1;
}

int main(){
    int arr[]={23,4,54,67,4,54,56,67,87};
    int n=87,size=sizeof(arr);
    int pos=findElement(arr,n,size);
    // if(pos==-1)
    ? cout<<endl<<" Element is not found at this index: ";
    : cout<<endl<<" Element is found at this index: "<<pos;
}