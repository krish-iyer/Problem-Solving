#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int size,arr_i,count;
    cin>>size;
    int arr[size];
    for(arr_i=0;arr_i<size;arr_i++)
    {
        cin>>arr[arr_i];
    }
    for(arr_i=0;arr_i<size;arr_i++)
    {
        count=0;
        for(int arr_j=arr[arr_i];arr_j%5!=0;arr_j++)
        {
          count++;
        }
        if(count<3&&arr[arr_i]>=38)
          arr[arr_i]=arr[arr_i]+count;

    }
    for(arr_i=0;arr_i<size;arr_i++)
    {
      cout<<arr[arr_i]<<"\n";
    }
    return 0;
}
