#include <iostream>
using namespace std;

int main() {

    int t,n;

    cin>>t;
    while(t--)
    {cin>>n;
    int i,j,flag=1;
     int index[n+1],a[n+1],b[n+1];
    for(i=0;i<n;i++)
    {


     cin>>index[i];
     int v=index[i];
     v=v-1;
     cin>>a[v]>>b[v];

}


    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
    {

        if(!((a[i]>a[j]&&b[i]<b[j])||(a[i]<a[j]&&b[i]>b[j])||(a[i]>b[j])||(a[j]>b[i])))
            {flag=0;
            break;}

    }
    if(flag==0)
        cout<<0;
    else
        cout<<1;


}

    }
