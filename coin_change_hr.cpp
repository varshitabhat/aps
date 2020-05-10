#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int nways(int n)
{
  int a[n+1]={0};


  a[0]=1;
  int i,x,c;
  cin>>c;
  int j;
  for(j=0;j<c;j++)
  {
      cin>>x;
      for(i=x;i<=n;i++)
  {
    a[i]=a[i]+a[i-x];
  }

  }
  //int b[3]={0};
  /*for(i=3;i<=n;i++)
  {
    a[i]=a[i]+a[i-3];
  }

  for(i=5;i<=n;i++)
  {
    a[i]=a[i]+a[i-5];
  }

  for(i=10;i<=n;i++)
  {
    a[i]=a[i]+a[i-10];
  }
*/

  //cout<<b[0]<<b[1]<<b[2];



  return a[n];

}
int main()
{

    int n;
    cin>>n;
    int ans=nways(n);
    cout<<ans;
}
