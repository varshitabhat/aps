#include <iostream>
using namespace std;

int main() {

long long int t,i,j;
    cin>>t;
  while(t--)
    {
        long long n,money;
        cin>>n;
        cin>>money;
        long long int a[n],b[n]={0};
        int flag=1;
        for(i=0;i<n;i++)
        cin>>a[i];
        int f=1;

         for(i=n-1;i>=0;i--)
        {

        if(money%a[i]!=0)
        {
          b[i]=money/a[i];
          b[i]=b[i]+1;
          flag=0;
          f=0;
          break;

        }
        }


        if(flag==1)
            {for(i=0;i<n-1;i++)
                {for(j=i+1;j<n;j++)
                        {
                            if((a[i]%a[j]!=0)&&(a[j]%a[i]!=0))
                        {
                            f=0;
                            if(a[i]>a[j])
                                {b[i]=1;
                                    b[j]=((money-a[i])/a[j])+1;}
                            else
                                    {b[j]=1;
                                    b[i]=((money-a[j])/a[i])+1;}




                        }
                        if(f==0)
                            break;}
                            if(f==0)
                            break;}
                        }






        if(f==1)

            cout<<"NO"<<endl;

       if(f==0)
        {cout<<"YES ";
            for(i=0;i<n;i++)
            cout<<b[i]<<" ";
            cout<<endl;}

        }

    }

