#include<iostream>
using namespace std;

int findElement(int arr[],int n){
    int maxcount=0,i,index=-1;
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>maxcount){
            maxcount=count;
            index=arr[i];
        }
    }
        if(maxcount>(n/2)){
            return index;
        }
        else
        return (-1);
}

int main(){
    int arr[]={1,33,2,1,4,1,1,1,4,3,1};
    int n=sizeof(arr)/sizeof(arr[0]),index;
    int pos=findElement(arr,n);
    if(pos!=-1){
        cout<<pos;
    }
    else
    cout<<"No numbe found ";
}





















