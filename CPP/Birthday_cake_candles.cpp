#include<iostream>
using namespace std;
int main()
{
    int n,i,count=0;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
      cin>>arr[i];
    int max=arr[0];
    for(i=0;i<n;i++)
    {
      if(arr[i]>max)
      {
        max=arr[i];
      }
    }
    for(i=0;i<n;i++)
    {
      if(arr[i]==max)
        count++;
    }
    cout<<count;
    return 0;
}
