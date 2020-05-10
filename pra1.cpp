#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,m,ma,ans;
    cin>>t;
    int a[1000],b[10000];
    while(t--)
    {
        cin>>n>>m;
        map<int,int> m1;
        for(int i=0;i<n;i++)
        {
          cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
            m1[a[i]]+=b[i];
        }


    ma=infinity;
    for(auto &val:m1)
    {

        if(val.se<ma)
        {
            ma=val.se;
            ans=val.f1;
        }
    }
    cout<<ma<<endl;
    }
    return 0;
}
