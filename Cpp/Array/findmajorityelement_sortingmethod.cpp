#include<iostream>
using namespace std;

int findMajority(int arr[], int n){
    int count=0,i;
    if(n==1)
    return arr[0];
    for(int i=0;i<n-1;i++){
        if(arr[i]==arr[i+1])  //  1,1,2,3,1,1,3,1
        count++;
    if(count>=n/2){
        return arr[i];
        count=1;
    }
    else return -1;
    }
}
int main(){
    int arr[1,1,2,3,1,1,3,1];
    int n=sizeof(arr)/sizeof(arr[0]);
    int pos=findMajority(arr,n);
}