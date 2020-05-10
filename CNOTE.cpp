#include <iostream>
using namespace std;

int main() {

    int x,y,k,n,pages,cost,t,i;
    int flag=0;
    cin>>t;
    while(t--)
    {flag=0;
        cin>>x>>y>>k>>n;
        int required=x-y;
        for(i=0;i<n;i++)
        {
            cin>>pages;
            cin>>cost;
            if(pages>=required && cost<=k)
                flag=1;

        }
        if(flag==1)
            cout<<"LuckyChef"<<endl;
         else
            cout<<"UnluckyChef"<<endl;

    }
}
