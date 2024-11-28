// #include<iostream>
// using namespace std;

// void sentinelsearch(int arr[],int n,int key){
//     int last=arr[n-1];
//     arr[n-1]=key;
//     int i=0;
//     while(arr[i]!=key)
//     i++;
//     arr[n-1]=last;

//     if((i<n-1)||(arr[n-1]==key))
//     cout<<key<<" is present at index "<<i;
//     else
//     cout<<"Element not found";
// }
// int main(){
//     int arr[]={10,20,30,40,50,60,70,80,90};
//     int n=sizeof(arr)/sizeof(0);
//     int key=60;
//     sentinelsearch(arr,n,key);
//     return 0;
// }



// #include <iostream>
// #include <vector>
// using namespace std;

// int sentinelLinearSearch(vector<int>array, int key) {
// 	int last = array[array.size() - 1];
// 	array[array.size() - 1] = key;
// 	int i = 0;
// 	while (array[i] != key) {
// 		i++;
// 	}
// 	array[array.size() - 1] = last;
// 	if (i < array.size() - 1 || last == key) {
// 		return i;
// 	} else {
// 		return -1;
// 	}
// }

// int main() {
// 	std::vector<int> array = {1, 2, 3, 4, 5, 6, 7, 8, 9};
// 	int key = 5;
// 	int index = sentinelLinearSearch(array, key);
// 	if (index == -1) {
// 		cout << key << " is not found in the array." << std::endl;
// 	} else {
// 		cout << key << " is found at index " << index << " in the array." << std::endl;
// 	}
// 	return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){

// }

































