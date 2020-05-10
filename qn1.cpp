#include <iostream>
#include<bits/stdc++>
using namespace std;

int main() {

    long long int t,n,s=0,i;
    cin>>t;
    long long int a[t];
    while(t--)
    {s=0;
        cin>>n;
        long long int a[n],b[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n;i++)
            cin>>b[i];
            sort(a,a+n);
            sort(b,b+n);
        for(i=0;i<n;i++)
            if(a[i]>b[i])
            s=s+b[i];
        else
            s=s+a[i];
        cout<<s<<endl;
    }
    }
