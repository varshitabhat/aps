#include <iostream>
using namespace std;

int main()
{
int t,n,i,m,k,a,j;
cin>>t;
while(t--)
    {
        cin>>n>>m>>k;
        int b[n][k];
        for(i=0;i<n;i++)
            for(j=0;j<k;j++)
                cin>>b[i][j];

            for(j=0;j<n;j++)
                cout<<b[j][0]<<" ";
                cout<<endl;

    }

}
