#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main(){
    int n;
    cin >> n;
    float count,count1,count2;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    for(int arr_i = 0;arr_i < n;arr_i++){
        if(arr[arr_i]<0)
            count=count+1;
        else if(arr[arr_i]>0)
            count1=count1+1;
        else
            count2=count2+1;
    }
    std::cout << std::fixed;
    std::cout << std::setprecision(5);
    cout<<count1/n<<"\n";
    cout<<count/n<<"\n";
    cout<<count2/n;
    return 0;
}
