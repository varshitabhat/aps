#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
int t,n,i,flag,distance;
cin>>t;
while(t--)
    {
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        distance=5;
        int cflag=1;
        for(i=0;i<n;i++)
        {
            if(a[i]==0)
                distance=distance+1;
            else
               {

                if(distance<5)
                    {
                    cout<<"NO\n";
                    cflag=0;
                    break;
                    }

                else
                    distance=0;
                }
        }
        if(cflag==1)
            cout<<"YES\n";

    }
}


