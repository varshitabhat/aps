#include <iostream>
using namespace std;
int bitcalculate(int n)
{int count=0;
 while(n!=0)
 {count++;
     n=n&(n-1);

 }
 return count;

}
int min(int a,int b)
{
  if(a>b)
        return a;
  else
    return b;

}






int main()
{
  int cost[3][3]={3,2,7,5,1,3,2,7,2};
  int dp[8]={1000};
  dp[0]=0;
  int i,j,k,temp;

int mask[9]={0,1,2,3,4,5,6,7,8};


  for(i=0;i<9;i++)
    for(j=0;j<3;j++)
    {int y=bitcalculate(mask[i]);
      if((1<<j)|mask[i]==mask[i])
        break;
      else
        {temp=1<<j|mask[i];
        k=mask[i];}


      dp[temp]=min(dp[temp],dp[k]+cost[y][j]);

    }


cout<<dp[7];

}
