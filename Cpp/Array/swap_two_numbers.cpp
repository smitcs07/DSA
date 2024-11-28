#include<iostream>
using namespace std;
int main(){
	int arr[12]={2,43,56,43,56,3,4,67,34,65},index;
	for(int i=0;i<9;i++){
		index=i;
		for(int j=i+1;j<10;j++){
			if(arr[index]>arr[j]){
				index=j;
			}
		}
		swap(arr[i],arr[index]);
	}
	for(int i=0;i<10;i++){
		cout<<arr[i]<<" ";
	}
}