#include <iostream>
using namespace std;

class InsertChar
{
public:
  string G_one;
  string Insert(string &s)
  {
    char m, n;
    int i = 0, r = 0;
    cout << "Enter a character to insert in the word:";
    cin >> m;
    cout << "Enter a character after which you want to insert:";
    cin >> n;
    while (s[i] != 0)
    {
      if (s[r] == n)
      {
        r++;
        for (int t = s.length() - 1; t >= r; t--)
        {
          s[t + 1] = s[t];
          if (t == r)
          {
            s[r] = m;
          }
        }
      }
      r++;
      i++;
    }
    return s;
  }
};

int main()
{
  InsertChar obj;
  obj.G_one = "Welome ";
  cout << "The final string is: " << obj.Insert(obj.G_one);
}