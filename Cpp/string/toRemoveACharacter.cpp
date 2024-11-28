#include<iostream>
using namespace std;

class RemoveChar{
  public:
    string G_one;
    string Remove(string &s){
      char m;int i=0,temp = 0;
      cout<<"Enter a character to Delete from the word:";
      cin>>m;
      while(s[i]!=0){
        if(s[i] == m){
          temp = s[i];
          for(;i<=s.length();i++){
            s[i] = s[1+i];
          }
        }
        i++;
      }
      return s;
    }
};

int main(){
    RemoveChar obj;
    obj.G_one = "Welcome";
    cout<<"The final string is: "<<obj.Remove(obj.G_one);
}