#include <iostream> 
#include <cmath>
using namespace std; 

int main() 
{ 
  int Km,opt;
  cout<<"Enter the Distance in Kilometre to convert in (meter,cm,Inch,feet):";
  cin>>Km;
do{
    cout<<"Press 1 to convert in Meter"<<endl<<"Press 2 to convert in Centimeter"<<endl<<"Press 3 to convert in Inch"<<endl<<"Press 4 to convert in Feet"<<endl<<"Press 0 to Exit"<<endl;
  cin>>opt;
    switch(opt){
      case 1:cout<<Km*1000<<" in meters"<<endl;
              break;
            case 2:cout<<Km*100000<<" in centimeter"<<endl;
                    break;
                  case 3:cout<<(Km*100000)/2.54f<<" in Inch"<<endl;
                          break;
                    case 4:cout<<((Km*100000)/2.54f)/12<<" in feet"<<endl;
                            break;
    }
  }while(opt);
	return 0; 
} 
