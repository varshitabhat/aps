#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
int t,n,i,flag,distance;
long int sum=0;
cin>>t;
while(t--)
    {int count=0;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
            {cin>>a[i];
            sum=sum+a[i];
            if(sum%4==0&&sum%2!=0)
                count++;
            else if(sum%2==1)
                count++;
            }

    cout<<count<<endl;}
}
