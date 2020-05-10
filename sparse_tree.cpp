#include <iostream>
using namespace std;


int main()
{
    int lookup[50][50];
    int a[]={7,2,3,0,5,10,3,12,18};
    int n=9,j,i;
    for(i=0;i<n;i++)
        lookup[i][0]=i;
    for(j=1;1<<j<=n;j++)
        for(i=0;(i+(1<<(j-1))<n);i++)
        {
        if(a[lookup[i][j-1]]<a[lookup[i+(1<<(j-1))][j-1]])
            lookup[i][j]=lookup[i][j-1];
        else
            a[lookup[i][j-1]]<a[lookup[i+(1<<(j-1))][j-1]];
        }
    for(i=0;i<n;i++)
        {for(j=0;j<n;j++)
            cout<<lookup[i][j];
            cout<<endl;}

        return 0;
}
