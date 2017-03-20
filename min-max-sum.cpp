#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    vector<long>arr(5);
    for(int i=0; i<5;i++)
        cin>>arr[i];
    vector<long>min(5);
    for(int i=0;i<5;i++)
    {
      for(int j=0;j<5;j++)
      {
        if(i!=j)
          min[i]+=arr[j];
      }
    }
    long int sp=min[0];
    long int sp2=min[0];
    for(int i=0;i<5;i++)
    {
      if(sp>min[i])
      {
        sp=min[i];
      }
    }
    for(int i=0;i<5;i++)
    {
      if(sp2<min[i])
      {
        sp2=min[i];
      }
    }
    cout<<sp<<" "<<sp2;
    return 0;

}
