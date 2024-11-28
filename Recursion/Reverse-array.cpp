#include <iostream> 
#include<cstring>
using namespace std; 

int ReverseNum(int *str,int n){
  int j=n-1;
  for(int i = 0; i < n/2-1; i++){
    str[i] = str[i]+str[j-i];
    str[j-i] = str[i]-str[j-i];
    str[i] = str[i]-str[j-i];
  }
}
 
int main() 
{ 
  int arr[10]={1,2,3,4,5,6,7,8,9,10};
  int n = sizeof(arr)/sizeof(arr[0]);
  ReverseNum(arr,n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
} 