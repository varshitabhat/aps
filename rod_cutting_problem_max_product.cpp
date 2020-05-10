#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int max(int a,int b,int c)
{
   if(a>b&&a>c)
        return a;
   else if(b>a&&b>c)
    return b;
   else return c;

}
int maxproduct(int n)
{
  int i,j;
  int result[n+1];
  result[0]=0;
  result[1]=0;
  for(i=2;i<=n;i++)
  {
    result[i]=0;

        for(j=1;j<=i/2;j++)
  {
      result[i]=max(result[i],j*(i-j),j*result[i-j]);


  }
  }

return result[i-1];

}


int main() {

int n=5;
int ans=maxproduct(n);
cout<<ans;
return 0;



}
