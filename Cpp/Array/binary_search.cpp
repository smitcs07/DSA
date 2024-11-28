#include<iostream>
using namespace std;
int binarySearch(int arr[],int start,int end,int n,int count){
    int mid=(start+end)/2;
    if(end<start)
    return -1;
    else if(arr[mid]==n)
    return mid;
    else if(n>arr[mid])
    return binarySearch(arr,(mid+1),end,n,count);
    else
    return binarySearch(arr,start,(mid-1),n,count);
}

int main(){
    int arr[ ]={1,2,4,5,6,7,8,9};
    int mid,start,end,n,count=sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter the value to search: ";
    cin>>n;
    cout<<"Element found at index: "<<binarySearch(arr,0,count-1,n,count);
}



/* #include<iostream>
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
    if(pos==-1)
    cout<<endl<<" Element is not found at this index: ";
    else 
    cout<<endl<<" Element is found at this index: "<<pos;
} */




























