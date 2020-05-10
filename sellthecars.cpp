/*for __ in range(int(input())):
    n1=int(input())
    total=sorted(list(map(int,input().split())), reverse=True)
    for i in range(n1):
        total[i]=total[i]-i
        if total[i]<0:
            total[i]=0
    print(sum(total)%1000000007)*/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
int t,i;
const unsigned int modd= 1000000007;
long n;
long long sum;
cin>>t;
while(t--)
        {
         cin>>n;
         int a[n];

         for(i=0;i<n;i++)
            cin>>a[i];
         sort(a,a+n,greater<int>());
         sum=a[0];
         for(i=1;i<n;i++)
         {
             a[i]=a[i]-i;
             if(a[i]<0)
                a[i]=0;
             sum=sum+a[i];

         }

    sum=sum%modd;
    cout<<sum<<endl;
        }
}
