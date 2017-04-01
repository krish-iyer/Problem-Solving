#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
  int w;
  double t;
  cin>>w>>t;
  if(t>w+0.5&&w>0&&w<=2000&&t>=0&&t<=2000&&w%5==0){
      cout <<fixed<<setprecision(2)<<t-w-0.50 ;
    }
    else if(t<w+0.5&&w>0&&t>=0&&t<=200||w%5!=0)
    {
      cout <<fixed<<setprecision(2)<<t ;
    }

    return 0;

}
