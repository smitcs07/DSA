#include<iostream>
using namespace std;

int sorting(int arr[],int n){
    int  temp;
    for(int i=1;i<n;i++){
        temp=arr[i];
        int j=i-1;
        for(;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
}
int main(){
    int arr[]={1,4,6,3,66,65,32};
    int n=sizeof(arr)/sizeof(arr[0]);
    sorting(arr,n);
    cout<<"After sorting: \n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}