// #include<iostream>
// using namespace std;

// void sortElement(int *arr ,int n){
//     int temp,i;
//  for(int i=0;i<n-1;i++){
//     for(int j=i+1;j<n;j++){
//     if(arr[i]>arr[j]){
//     temp=arr[i];
//     arr[i]=arr[j];
//     arr[j]=temp;
//     }
//   }
// }
//     cout<<"\nAfter sorting:\n";
//     for(int i=0;i<n;i++){
//         cout<<arr[i];
//     }
// }
// int main (){
//     int arr[]={1,2,3,1,1,1,1,1};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     cout<<"Before sorting:\n";
//     for(int i=0;i<n;i++){
//         cout<<arr[i];
//     }
//     sortElement(arr,n);
// }


// // #include<iostream>
// // using namespace std;

// // void sortElement(int *arr, int n) {
// //     int temp;
// //     for(int i = 0; i < n-1; i++) {
// //         for(int j = i+1; j < n; j++) {
// //             if(arr[i] > arr[j]) {
// //                 // Swap arr[i] and arr[j]
// //                 temp = arr[i];
// //                 arr[i] = arr[j];
// //                 arr[j] = temp;
// //             }
// //         }
// //     }
// //     cout << "\nAfter sorting:\n";
// //     for(int i = 0; i < n; i++) {
// //         cout << arr[i] << " ";
// //     }
// //     cout << endl;
// // }

// // int main() {
// //     int arr[] = {1, 2, 3, 1, 1, 1, 1, 1};
// //     int n = sizeof(arr) / sizeof(arr[0]);
// //     cout << "Before sorting:\n";
// //     for(int i = 0; i < n; i++) {
// //         cout << arr[i] << " ";
// //     }
// //     cout << endl;

// //     sortElement(arr, n);

// //     return 0;
// // }


#include <iostream>
#include <iomanip>

void readTime() {
    int hours, minutes, seconds;
    std::cout << "Enter hours: ";
    std::cin >> hours;
    std::cout << "Enter minutes: ";
    std::cin >> minutes;
    std::cout << "Enter seconds: ";
    std::cin >> seconds;

    std::cout << "Time entered: "
              << std::setw(2) << std::setfill('0') << hours << ":"
              << std::setw(2) << std::setfill('0') << minutes << ":"
              << std::setw(2) << std::setfill('0') << seconds << std::endl;
}

int main() {
    readTime();
    return 0;
}


























