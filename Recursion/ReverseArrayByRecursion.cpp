#include <iostream> 
#include<cstring>
using namespace std; 

void ReverseNum(int *str, int start, int end){
    if(start>=end)
    return;
    int temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    ReverseNum(str,start+1,end-1);
}
 
int main() 
{ 
  int arr[10]={1,2,3,4,5,6,7,8,9,10};
  int n = sizeof(arr)/sizeof(arr[0]);
  ReverseNum(arr,0,n-1);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
} 