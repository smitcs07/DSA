#include<iostream>
using namespace std;

int findMajority(int arr[],int n){
    int count;
    for(int i=0;i<9;i++){
        count=0;
        for(int j=1+i;j<10;j++){
            if(arr[i]==arr[j])
            count++;
        }
        cout<<" "<<arr[i]<<" is "<<count<<" Number of times ";
    }
} 
int main(){
    int arr[10]={1,2,3,3,3,4,5,3,4,3};
    int n=sizeof(arr);
    findMajority(arr,n);
}