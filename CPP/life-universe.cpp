#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int input;
    vector<int>arr;
    while(cin>>input&&input!=42)
    arr.push_back(input);
    int ind=arr.size();
    cin>>arr[ind+1];
    for(vector<int>::iterator it=arr.begin();it!=arr.end();++it)
    {
      if(*it==42)
      {
        break;
      }
      cout<<*it<<"\n";
    }
    return 0;
}
 
