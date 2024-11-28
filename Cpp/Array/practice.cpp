#include<iostream>
using namespace std;

 int checkMojority(int arr[],int n){
    int count=0,maxcount=0,i,j,display=-1;
    for(int i=0;i<n;i++){
        count=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
       if(maxcount<count){
        maxcount=count;
        display=arr[i];
       }
    }
    if(maxcount>n/2){
        return display;
    }
    else
    return (-1);
 }
int main(){
    int arr[]={2,2,2,2,2,3,4,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int pos = checkMojority(arr,n);
    if(pos==-1){
        cout<<"There is no majority element ";
    }
    else{
        cout<<"The majority element is "<<pos;
    }
}