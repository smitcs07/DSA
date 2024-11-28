//  By recursive

// #include<iostream>
// using namespace std;
// int binarySearch(int arr[],int start,int end,int n,int count){
//     int mid=(start+end)/2;
//     if(end<start)
//     return -1;
//     else if(arr[mid]==n)
//     return mid;
//     else if(n>arr[mid])
//     return binarySearch(arr,(mid+1),end,n,count);
//     else
//     return binarySearch(arr,start,(mid-1),n,count);
// }

// int main(){
//     int arr[ ]={1,2,4,5,6,7,8,9};
//     int mid,start,end,n,count=sizeof(arr);
//     cout<<"Enter the value to search: ";
//     cin>>n;
//     cout<<"Element found at index: "<<binarySearch(arr,0,count-1,n,count);
// }



//  By iteration
#include<iostream>
using namespace std;

int findElement(int arr[],int check,int start,int end){
        while(end>=start){
          int mid=(start+end)/2;
        if(arr[mid]==check)
        return mid;
        if(arr[mid]<=check)
        end=mid+1;
        else
        start=mid-1;
    }
    return -1;
}
int main(){
    int arr[]={12,32,45,65,67,87,89,34};
    int check=32,size=sizeof(arr),start,end;
    int pos=findElement(arr,check,0,size);
    if(pos==-1)
     cout<<"Element is not found at the index ";
     else
    cout<<"Element found at this index: "<<pos;
}






















