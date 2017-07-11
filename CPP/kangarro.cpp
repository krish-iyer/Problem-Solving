#include<iostream>
using namespace std;
int main()
{
    int x_1,x_2,v_1,v_2;
    cin>>x_1>>v_1>>x_2>>v_2;
    int add_1=x_1+v_1,add_2=x_2+v_2;

    if(x_1<x_2&&v_1<v_2)
      cout<<"NO";
    else
    {
        while(add_2>add_1)
        {
          add_1+=v_1;
          add_2+=v_2;
        }
        if(add_2==add_1)
          cout<<"YES";
        else
          cout<<"NO";
    }
    return 0;
}
