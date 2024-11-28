#include<iostream>
using namespace std;

class Count{
  public:
  int countLength(const string& N){
    int a = 0 ;
    while(N[a]){
      a++;
    }
    return a;
  }
};

int main(){
  string N = "Ram";
  Count obj;
  cout<<"The length is: "<<obj.countLength(N);
}

