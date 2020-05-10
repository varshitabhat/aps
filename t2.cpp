#include <iostream>
using namespace std;
long long int countone(long long int n)
{
    long long int count=0;
    while (n)
    {
      n=n&(n-1);

count++;
    }
    return count;
}
int main()
{   long long int t,n,m,i,j;
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    cin>>t;
    while(t--)
    {cin>>n;
    cin>>m;
    long long int a,b;
    long long int odd=0,even=0;
    for(i=0;i<n;i++)
        {cin>>a;
        if(countone(a)%2==0)
            even++;
        else
            odd++;
        }
    /*for(i=0;i<m;i++)
        cin>>b[i];*/
    for(i=0;i<m;i++)
    {
        cin>>b;
        if(countone(b)%2==0)
            cout<<even<<" "<<odd<<"\n";
        else
           cout<<odd<<" "<<even<<"\n";
    }






    }
}
