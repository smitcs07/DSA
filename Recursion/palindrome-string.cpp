#include <iostream> 
#include<cstring>
using namespace std; 

int pallindrome(const char *str){
  int i=0 ,j= strlen(str)-1;
  while(i<j){
    if(str[i]!=str[j]){
      return 0;
    }
    j--,i++;
  }
  return 1;
}
 
int main() 
{ 
  char arr[100]="madam";
  char arre[50];
  cout<<"Enter another string from your side: ";
  cin>>arre;
  if(pallindrome(arr)){
    cout<<"It is Pallindrome: ";
  }
  else{
        cout<<"\nIt is not Pallindrome: ";
  }

  if(pallindrome(arre)){
    cout<<"\nIt is Pallindrome: ";
  }
    else{
        cout<<"\nIt is not  Pallindrome: ";
  }
	return 0; 
} 