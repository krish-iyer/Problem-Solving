#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    float n,sum2=0,sum1=0,diff=0;
    cin >> n;
    vector< vector<int> > a(n,vector<int>(n));
    for(int a_i = 0;a_i < n;a_i++){
       for(int a_j = 0;a_j < n;a_j++){
          cin >> a[a_i][a_j];
       }
    }
    for(int a_i = 0;a_i < n;a_i++){
       for(int a_j = 0;a_j < n;a_j++){
           if(a_i==a_j)
               {
               sum2=sum2+a[a_i][a_j];
           }
           if(a_i+a_j==n-1)
               {
               sum1=sum1+a[a_i][a_j];
           }
       }
    }
    diff=sum1-sum2;
    cout<<abs(diff);
    return 0;
}
