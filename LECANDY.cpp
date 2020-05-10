#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int t,n,i,j,sum,inter;
    long long int c;;
    cin>>t;
    for(i=0;i<t;i++)
    {sum=0;
      cin>>n;

      cin>>c;
      for(j=0;j<n;j++)
      {
        cin>>inter;
      sum=sum+inter;
      }
      if(sum>c)
            cout<<"No"<<endl;
     else
             cout<<"Yes"<<endl;

    }

}
