#include <iostream> 
#include <cmath>
using namespace std; 

int main() 
{ 
  int B, A, C;
  int sq, Dsq;
  float Root1,Root2;
  cout<<"Enter the coeffecient of x^2 with sign:";
  cin>>A;
  cout<<"Enter the coeffecient of x^1 with sign:";
  cin>>B;
  cout<<"Enter the constant number with sign:";
  cin>>C;
  if(A==0){
    cout<<"This is not Quadratic Equation";
    return 0;
  }
  Dsq =(B*B-(4*(A*C)));
  if(Dsq >= 0){
  Root1 = ((B - sqrt(Dsq))/(2*A));
  Root2 = ((-B - sqrt(Dsq))/(2*A));
  cout<<"The roots are "<<Root1<<","<<Root2;
  }
  else{
    cout<<"Roots are Imaginary ";
  }
	return 0; 
} 

// x^2-2x+1=0