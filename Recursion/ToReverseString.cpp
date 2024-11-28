// Method 1
/* 
#include <iostream> 
#include<cstring>
using namespace std; 

int reverseString(char *str){
  int temp;
  int s= strlen(str)-1;
  for(int i=0 ;i<=s/2; i++){
      temp = str[s-i];
      str[s-i] = str[i];
      str[i] = temp;
  }
  cout<<str;
} 
 
int main() 
{ 
  char arr[100]="madw";
  reverseString(arr);
} 
*/

// Method 2
/* 
#include <iostream> 
#include<cstring>
using namespace std; 

int reverseString(char *str){
  int temp;
  int s= strlen(str)-1;
  for(int i=s ;i>=0; i--){
      cout<<str[i];
  }
} 
 
int main() 
{ 
  char arr[100]="madams";
  reverseString(arr);
}
*/ 

 
/*
#include <iostream> 
#include<cstring>
using namespace std; 

int reverseString(char *str,int i){
  int temp;
    int s= strlen(str)-1;
  if(i>s/2){
    return 0;
  }
  else{
      temp = str[s-i];
      str[s-i] = str[i];
      str[i] = temp;
      reverseString(str,i+1);
  }
} 
 
int main() 
{ 
  char arr[100]="madwee";
  reverseString(arr,0);
  cout<<arr;
}*/













