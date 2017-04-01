#include<iostream>
#include<vector>
using namespace std;
int main()
{
  long n,k,count=0;
  cin>>n>>k;
  vector<int>arr(n);
  for(long arr_i=0;arr_i<n;arr_i++){
    cin>>arr[arr_i];
  }
  for(vector<int>::iterator it=arr.begin();it!=arr.end();++it){
    if(*it%k==0)
      count++;
  }
  cout<<"\n"<<count;
}
