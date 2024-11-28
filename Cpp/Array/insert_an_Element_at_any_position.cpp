#include<iostream>
using namespace std;

int insertElement(int arr[],int n,int pos,int add){
    int i;
    for(int i=n-1;i>=pos;i--)
    arr[i+1]=arr[i];
    arr[pos]=add;  // Doubt at this line arr[i]=add.
    return 0;
}

int main(){
    int arr[10]={1,2,3,4,5,6,7};
    int n=7,add=23,i,pos=2;

    cout<<"Before adding the element: ";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    
    insertElement(arr,n,pos,add);

    cout<<endl<<"After addition of element of an array: ";
    for(int i=0;i<n+1;i++)
    cout<<arr[i]<<" ";
}