#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  char charArray[10] ;
  int intArray[10], idx;
  for(int i=0; i<10; i++)
  {
    cin>>charArray[i];
  }
  if(charArray[8]=='P')
  {

    for(idx = 0; idx <strlen(charArray); idx++)
    {
        intArray[idx] = charArray[idx] - '0';
    }
    if(intArray[0]==1&&intArray[1]==2)
    {
      for(idx=0;idx<8;idx++)

      {



          if(idx==2||idx==5)
          {
            cout<<":";
          }
          else
          {
            cout<<intArray[idx];
          }
      }
    }
    else{
    int num;
    num=intArray[0];
    num=num*10+intArray[1];
    num=num+12;
    if(num>=0||num<=23)
    {
      intArray[0]=num/10;
      intArray[1]=num%10;
      for(idx=0;idx<8;idx++)

      {



          if(idx==2||idx==5)
          {
            cout<<":";
          }
          else
          {
            cout<<intArray[idx];
          }
      }
    }

  }
  }
  else
  {
    for(idx = 0; idx <strlen(charArray); idx++)
    {
        intArray[idx] = charArray[idx] - '0';
    }
    if(intArray[0]==1&&intArray[1]==2)
    {

        intArray[0]=intArray[1]=0;
    }
    for(idx=0;idx<8;idx++)

    {

          if(idx==2||idx==5)
          {
            cout<<":";
          }
          else
          {
            cout<<intArray[idx];
          }



    }

  }

  return(0);
}
