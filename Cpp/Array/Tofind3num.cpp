#include<iostream>
using namespace std;

int main(){
int arr[10]={2,34,45,76,34,67,45,76,54,67},temp=0;

for(int i=0;i<9;i++){
    for(int j=1+i;j<10;j++){
        if(arr[i]<arr[j]){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        }
    }
}
for(int i=0;i<10;i++)
cout<<arr[i]<<" ";
}


// C++ program for find the largest 
// three elements in an array

// #include<iostream>
// using namespace std;

// int main(){
//     int arr[10]={43,67,34,67,54,32,545,76,86,44};
//     int first=arr[0],second=arr[0],third=arr[0],arr_size=sizeof(arr)/sizeof(arr[0]);

//     if(arr_size<3)
//     cout<<"Invalid Input: ";

//     for(int i=0;i<10;i++){
//         if(arr[i]>first){
//             third=second;
//             second=first;
//             first=arr[i];
//         }
//         else if(arr[i]>second || arr[i]!=first)
//         second=arr[i];

//         else if(arr[i]>third || arr[i]!=first || arr[i]!=second)
//         second=arr[i];
//     }

//     cout<<"First three elements are: "<<first<<" "<<second<<" "<<third;

// }


























