#include<iostream>
using namespace std;

int main(){
    int arr1[10]={1,2,3,4,5,6,7,8,9,10};
    int arr2[10]={11,12,3,4,5,16,7,18,9,10};
    int inte[100],uni[100],count=0;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(arr1[i]==arr2[j]){
            inte[count]=arr2[j];
            count++;
            }
        }
    }
    cout<<"The intersection of two array is: ";
    for(int i=0;i<10;i++){
        cout<<" "<<inte[i];
    }
}














