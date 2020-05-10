#include <bits/stdc++.h>
using namespace std;
long int minVal(long int x, long int y) { return (x < y)? x: y; }
long int getMid(long int s, long int e) { return s + (e -s)/2; }

long int RMQUtil(long int *st, long int ss, long int se,long int qs, long int qe, long int index)
{
	if (qs <= ss && qe >= se)
		return st[index];

	if (se < qs || ss > qe)
		return INT_MAX;

	long int mid = getMid(ss, se);
	return minVal(RMQUtil(st, ss, mid, qs, qe, 2*index+1),
				RMQUtil(st, mid+1, se, qs, qe, 2*index+2));
}

long int RMQ(long int *st, long int n, long int qs, long int qe)
{

	if (qs < 0 || qe > n-1 || qs > qe)
	{
		cout<<"Invalid Input";
		return -1;
	}

return RMQUtil(st, 0, n-1, qs, qe, 0);
}

int constructSTUtil(long int arr[], long int ss, long int se,
								long int *st, long int si)
{
	if (ss == se)
	{
		st[si] = arr[ss];
		return arr[ss];
	}

	long int mid = getMid(ss, se);
	st[si] = minVal(constructSTUtil(arr, ss, mid, st, si*2+1),
					constructSTUtil(arr, mid+1, se, st, si*2+2));
	return st[si];
}

long int *constructST(long int arr[], long int n)
{

	long int x = (long int)(ceil(log2(n)));

	long int max_size = 2*(long int)pow(2, x) - 1;

	long int *st = malloc(max_size*sizeof(long int));


	constructSTUtil(arr, 0, n-1, st, 0);

	return st;
}

int main()
{long int n,i,m,qs,qe;

cin>>n;
cin>>m;
long int arr[n];
for(i=0;i<n;i++)
    cin>>arr[i];


	long int *st = constructST(arr, n);

	for(i=0;i<m;i++)
    {cin>>qs>>qe;

	cout<<RMQ(st, n, qs, qe)<<endl;}

	return 0;
}

