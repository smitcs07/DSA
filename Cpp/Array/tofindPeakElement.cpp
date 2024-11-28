#include<iostream>
using namespace std;

int findElement(int arr[],int n){
    if(n==1)
    return 0;
    if(arr[0]>arr[1])
    return 0;
    if(arr[n-1]>arr[n-2])
    return n-1;
   
       cout<<"The index of peak Element is: ";
       for(int i=1;i<9;i++){
       if(arr[i-1]<arr[i] && arr[i]>arr[i+1])
       cout<<i<<" ";
    }
}
int main(){
    int arr[10]={12,34,13,44,24,65,55,66,566,4};
    int n=sizeof(arr);
    int pos=findElement(arr,n);
    
}