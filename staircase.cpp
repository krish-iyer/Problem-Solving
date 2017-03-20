#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n,i=0,j=0,k;
    cin >> n;
    for(i=0;i<n;i++)
        {
        for(j=n-i;j>1;j--)
            cout<<" ";
        for(j=0;j<=i;j++){
            cout<<"#";

        }
        cout<<"\n";
    }
    return 0;
}
