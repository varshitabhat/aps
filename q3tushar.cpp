#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {

long long int t,i,j,n,k,l,m,ans=0;

char e;
cin>>t;
while(t--)
    {long int r,s,o;

    long int arr[4][4]={0},a[4]={0},sum=0,amt=-401;
        cin>>n;
        if(n>0)
        {for(m=0;m<n;m++)
           {

            cin>>e>>r;
            if(r==12)
                r=0;
            else if(r==3)
                r=1;
            else if(r==6)
                r=2;
            else if(r==9)
                r=3;
        if(e=='A')
            s=0;
        else if(e=='B')
            s=1;
        else if(e=='C')
            s=2;
        else if(e=='D')
            s=3;
            arr[s][r]=arr[s][r]+1;}

            for(i=0;i<4;i++)
            {for(j=0;j<4;j++)
            {
                if(j!=i)
                   for(k=0;k<4;k++)
                {
                    if((k!=j) && (k!=i))
                    for(l=0;l<4;l++)
                    {
                        if((l!=i)&&(l!=j)&&(l!=k))
                        {sum=0;


                           long int a[]={arr[0][i],arr[1][j],arr[2][k],arr[3][l]};
                           sort(a,a+4);
                           for(o=0;o<4;o++)
                           {
                            if(a[o]==0)
                            sum=sum-100;
                            else
                                sum=sum+(a[o]*(o+1)*25);



                           }
                            if(sum>amt)
                                amt=sum;





                        }
                    }

                }
            }

            }


        }
        else{ sum=-400;
                amt=sum;
        }
        cout<<amt<<endl;
        ans=ans+amt;
    }
    cout<<ans<<endl;
}
