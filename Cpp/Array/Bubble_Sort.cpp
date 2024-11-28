#include<iostream>
using namespace std;

int Sorting(int *arr, int n){
    int temp,i,j;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main(){
    int arr[]={2,3,1,22,34,53,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Before sorting: \n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    Sorting(arr,n);
    cout<<"\nAfter sorting: \n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}






























