#include <iostream>
using namespace std;

int main() {

int t,i;
    cin>>t;
    int n=t;
    int a[t];

    while(t--)
    {
    int n,i,x,c;
    cin>>n;
    cin>>c;
    int sum=0;
    for(i=0;i<n;i++)
    {cin>>x;
    sum=sum+x;

    }
    int ans=sum%c;
    a[t]=ans;

}
for(i=n-1;i>=0;i--)
    cout<<a[i]<<endl;
}
