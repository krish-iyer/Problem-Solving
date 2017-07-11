#include<iostream>
using namespace std;
int main()
{
    long int i,s,t,a,b,m,n,count_app=0,count_orr=0;
    cin>>s>>t;
    cin>>a>>b;
    cin>>m>>n;
    long int app[m],orr[n];
    for(i=0;i<m;i++)
      cin>>app[i];
    for(i=0;i<n;i++)
      cin>>orr[i];
    long int diff_a=s-a,diff_b=t-a;
    for(i=0;i<m;i++)
    {
        if(app[i]>=diff_a&&app[i]<=diff_b&&a<s&&s<t&&t<b&&app[i]>0)
          count_app++;
    }
    diff_a=b-s,diff_b=b-t;
    for(i=0;i<n;i++)
    {
        if(orr[i]<0)
        {
            orr[i]=orr[i]*(-1);
            if(orr[i]<=diff_a&&orr[i]>=diff_b&&a<s&&s<t&&t<b)
                count_orr++;
        }
        
    }
    cout<<count_app<<"\n"<<count_orr;
    return 0;
}

