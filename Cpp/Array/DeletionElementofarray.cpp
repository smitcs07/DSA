#include<iostream>
using namespace std;

// Finding Element of Array
int findElement(int arr[],int n,int check){
    int i=1;
    for(int i=0;i<n;i++)
        if(arr[i]==check)
        return i;
        return -1;
}
  //  Deletion Element of array
int deleteElement(int arr[],int n,int check){
    int pos=findElement(arr,n,check);
    if(pos==-1){
    cout<<"Element not found: ";
    return 0;
    }
     int i=1;
    for(i=pos;i<n-1;i++)
    arr[i]=arr[i+1];
    return n-1;
}

int main(){
    int arr[10]={23,45,34,54,66,76,89,90,30,54};
    int n=sizeof(arr)/sizeof(arr[0]),check=23;   // Doubt in n variable

    cout<<"Before Deletion of array: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    n=deleteElement(arr,n,check);

    cout<<endl<<"After Deletion of Element of array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}