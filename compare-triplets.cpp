#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a1,a2,a3,b1,b2,b3,count1=0,count2=0;
    cin>>a1>>a2>>a3;
    cin>>b1>>b2>>b3;
    if(a1>b1&&a1>=1&&a1<=100&&b1>=1&&b1<=100)
        {
        count1=count1+1;
    }
    else if(a1<b1&&a1>=1&&a1<=100&&b1>=1&&b1<=100)
        {
        count2=count2+1;
    }


    if(a2==b2&&b2>=1&&b2<=100&&a2>=1&&a2<=100)
        {

        count1=count1+0;
        count2=count2+0;
    }
    else if(a2!=b2&&a1>=1&&a1<=100&&b1>=1&&b1<=100)
        {
            if(a2>b2&&a1>=1&&a1<=100&&b1>=1&&b1<=100)
                {
                count1=count1+1;
            }
         else if(a2<b2&&a1>=1&&a1<=100&&b1>=1&&b1<=100)
                {
                count2=count2+1;
            }
    }
    if(a3<b3&&a3>=1&&a3<=100&&b3>=1&&b3<=100){
         count2=count2+1;
    }
     else if(a3>b3&&a1>=1&&a1<=100&&b1>=1&&b1<=100)
        {
        count1=count1+1;
    }

    cout<<count1<<" "<<count2;

    return 0;
}
