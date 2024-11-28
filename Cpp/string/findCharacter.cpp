#include<iostream>
using namespace std;

class Find{
  public:
  int findIndex(const string& N , char Key){
    int i = 0;
    while(N.length() < N[i]){
      if(N[i] == Key)
      return i;
      i++;
    }
  }
};

int main(){
  string s = "I am smart";
  char Key;
  Find obj;
  cout<<"Enter a character which is present or not:";
  cin>>Key;
  cout<<"\nIt is found at index: "<<obj.findIndex(s,Key);
}