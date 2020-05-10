#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{   int t,n,i,flag;
    cin>>t;
    while(t--)
        {cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        cin>>a[i];

        flag=1;
        for(i=0;i<n;i++)
            {


            if (a[i]==1)
                {

                    int j=1,sum=0;
                while(((j+i)<n)&&(j<6))
                        {
                        sum=sum+a[i+j];
                        j++;
                        }
            if(sum>0)
                {flag=0;
                cout<<"NO\n";
                break;
                }

                }

            }
             if(flag==1)
        cout<<"Yes\n";
    }
}
