#include <iostream>
using namespace std;

int main()
{int n,k,i,j,min;
cin>>n;
cin>>k;
int c[n+1]={0};
c[0]=1;
for(i=0;i<n;i++)
    {
      if(i>k)
        min=k;
      else
        min=i;
      for(j=min;j>0;j--)
        c[j]=c[j]+c[j-1];

    }

 cout<<c[k];
}

