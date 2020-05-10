#include <iostream>
using namespace std;

int main()
{   long long int t,n,m,i,j;
long long int p;
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    cin>>t;
    while(t--)
    {cin>>n;
    cin>>m;
    long long int a[n],b,oc,ec;
    for(i=0;i<n;i++)
        cin>>a[i];
    /*for(i=0;i<m;i++)
        cin>>b[i];*/
    for(i=0;i<m;i++)
    {
        cin>>b;
        int e=0,o=0;
    ec=0;oc=0;
        if(b%2==0)
            e=1;
        else
            o=1;
        for(j=0;j<n;j++)
        {
          int w=a[j]%2;
        if((w==0&&e==1)||(w==1&&e==0))
            ec++;
        else
            oc++;
        }
        cout<<ec<<" "<<oc<<"\n";
    }






    }
}
