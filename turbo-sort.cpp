#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
  long int t;
  cin>>t;
  vector<int>arr(t);
  for(int arr_i=0;arr_i<t;arr_i++)
    cin>>arr[arr_i];
    vector<int>::iterator it;
  sort(arr.begin(),arr.end());


  for(vector<int>::iterator it=arr.begin();it!=arr.end();++it){
  //  for(int i=0;i<5;i++)
  //  {
    //  if(cp[i]==*it)
      //  ++it;
    //}
    cout<<*it<<"\n";
}
  return 0;
}
