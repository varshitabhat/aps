#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{   int t,n,m,i;
    cin>>t;
    while(t--)
    {cin>>n;

    cin>>m;
    int a[n],b[m]={0};
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=0;i<n;i++)
    {
        int q;
        int temp=a[i];
    cin>>q;
    b[temp-1]=b[temp-1]+q;


    }
     sort(b,b+m);
     int flag=1;
     for(i=0;i<m;i++)
     {if(b[i]!=0)
       {cout<<b[i]<<"\n";
       flag=0;
        break;

       }

     }
 if (flag==1)
        cout<<"0\n";

}
}
