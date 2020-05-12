//A program based on DP algorithm : Unbounded Knapsack. A question by 01fe17bcs238
#include<bits/stdc++.h>
using namespace std;


int unboundedKnapsack(int W, int n, int val[], int wt[])
{

    int dp[W+1];
    memset(dp, 0, sizeof dp);


    for (int i=0; i<=W; i++)
      for (int j=0; j<n; j++)
         if (wt[j] <= i)
            dp[i] = max(dp[i], dp[i-wt[j]]+val[j]);

    return dp[W];
}


int main()
{int t;
cin>>t;
while(t--)
{
    int n,i,maxweight;
    cin>>n;
    int weight[n],price[n];
    for(i=0;i<n;i++)
    {cin>>weight[i];
     cin>>price[i];
    }
    cin>>maxweight;
    cout << unboundedKnapsack(maxweight, n, price, weight)<<"\n";
}

    return 0;
}
