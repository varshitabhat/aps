/*for _ in range(int(input())):
    n=int(input())
    if n==1:
        print(1)
        print(1,1)
    else:
        days=n//2
        print(days)
        k=1
        for i in range(days):
            if i!=days-1:
                print(2,k,k+1)
            else:
                if n%2==0:
                    print(2,k,k+1)
                else:
                    print(3,k,k+1,k+2)
            k+=2*/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
int t,i,n,gcdd;
cin>>t;
while(t--)
    {
        cin>>n;
        if(n>1)
        {
            gcdd=n/2;
            int w=gcdd-1;
            cout<<gcdd<<endl;
            int j=1;
            for(i=0;i<gcdd;i++)
            {
                if(i!=w)
                    cout<<"2 "<<j<<" "<<j+1<<"\n";
                else
                {
                if(n%2!=0)
                   cout<<"3 "<<j<<" "<<j+1<<" "<<j+2<<"\n";
                if (n%2==0)
                   cout<<"2 "<<j<<" "<<j+1<<"\n";
            }
            j=j+2;
            }
        }
        else if(n==1)
            cout<<"1 1 1\n";
    }
}
