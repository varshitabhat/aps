#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,i,j,count=0;;
    cin>>n;
    int a[n+1][n+1],taken[n+1]={0};
    for(i=1;i<n+1;i++)
       for(j=1;j<n+1;j++)
           cin>>a[i][j];

    for(i=1;i<n+1;i++)
       for(j=1;j<n+1;j++)
       {
           if(a[i][j]!=-1)
           {
int m=a[i][j];
           if(taken[m]==0)
            {taken[m]=1;
            break;
            }}

       }
       int f=0;
       for(i=1;i<n+1;i++)
        if(taken[i]==0)
        {
            f=1;
            cout<<i<<endl;
        }
        if(f==0)
            cout<<-1;
    /*int flag=0,count=0;
    for(i=1;i<n+1;i++)
    { for(j=1;j<n+1;j++)
       {
           if(a[j][i]!=-1)
               flag=1;
       }
    if(flag==0)
    {
        cout<<i<<endl;
        count++;

    }
    else
     flag=0;
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
