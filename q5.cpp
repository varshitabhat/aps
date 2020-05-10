#include <iostream>
using namespace std;
int a[400];
int leap(long long int y)
{
  if((y%400==0)||((y%4==0)&&(y%100!=0)) )
    return 1;
  else
    return 0;

}

int day(int d,int m,long long int y)
{
static int days[12]={0,3,2,5,0,3,5,1,4,6,2,4};
y-=m<3;
return(y+(y/4)-(y/100)+(y/400)+days[m-1]+d)%7;
}
int main()
{
    //int a[400];
    int i,year,rep=0;
    for(i=0;i<400;i++)
    {
       year=i;
       if(leap(year))
       {

           if(day(1,2,year)==6)
           rep+=1;

       }
       else
        {if((day(1,2,year)==0)||(day(1,2,year)==6))

           rep+=1;
       }
    a[i]=rep;
    }

    long long int t;
    cin>>t;
    while(t--)
    {
     int m1,m2;
     long long int y1,y2;
     cin>>m1>>y1;
     cin>>m2>>y2;
     if(y1!=y2)
     {

      if(m1<=2)
        y1-=1;
        if(m2<2)
         y2-=1;
    int r1=y1%400;
     long long int t1=(y1/400)*101;
    int r2=y2%400;

    long long int t2=(y2/400)*101;
    //int final=
    cout<<((a[r2]+t2)-(a[r1]+t1))<<endl;
    //final=final);
    //cout<<final<<endl;

     }
     else
    {

      int u=0;
      if((m2>=2)&&(m1<=2))
            {

                if(leap(y1))
                {
                if(day(1,2,y1)==6)
                {u=u+1;}}
            else
            {
                if((day(1,2,y1)==6)||(day(1,2,y1)==0))
                    u=u+1;

            }
             cout<<u<<endl;

            }
        else cout<<"0"<<endl;




     }


    }

}
