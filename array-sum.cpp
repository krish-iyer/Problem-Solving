#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n,arr_i;
    cin >> n;
    vector<int> arr(n);
    for(arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    int total;
    total=0;
    for(arr_i=0;arr_i<n;arr_i++)
        {
        total=total+arr[arr_i];

    }
    cout<<total;
    return 0;
}
