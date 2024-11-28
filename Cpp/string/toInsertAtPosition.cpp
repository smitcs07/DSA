#include<iostream>
using namespace std;

class Find{
  public:
 string findIndex(string& N , char Key , int pos){
    N.insert(N.begin() + pos , Key);
    return N;
  }
};

int main(){
  string s = "I am smart";
  char Key;
  Find obj;
  cout<<"Enter a character which is present or not:";
  cin>>Key;
  cout<<"\nIt is found at index: "<<obj.findIndex(s,Key, 3);
  return 0;
}

