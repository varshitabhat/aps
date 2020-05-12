//A program based on Greedy algorithm:Job sequencing. A question by 01fe17bcs238
#include<iostream>
#include<algorithm>
using namespace std;

struct Job
{
int id;
int deadline;
int saved;
};


bool compare(Job a, Job b)
{
  return (a.saved > b.saved);
}


void jobschedule(Job arr[], int n)
{

  sort(arr, arr+n, compare);

  int result[n];
  bool slot[n];


  for (int i=0; i<n; i++)
    slot[i] = false;


  for (int i=0; i<n; i++)
  {

  for (int j=min(n, arr[i].deadline)-1; j>=0; j--)
  {

    if (slot[j]==false)
    {
      result[j] = i;
      slot[j] = true;
      break;
    }
  }
  }

int sum=0;
  for (int i=0; i<n; i++)
  if (slot[i])
    {cout << arr[result[i]].id << " ";
    sum=sum+arr[result[i]].saved;
}
cout<<"\n"<<sum;
}

int main()
{int n,i;
cin>>n;
Job arr[n];
for(i=0;i<n;i++)
{arr[i].id=i;
    cin>>arr[i].deadline>>arr[i].saved;
}
  jobschedule(arr, n);

}
