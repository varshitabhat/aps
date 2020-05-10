#include <iostream>
using namespace std;
int main()
{

    long int t, n, i, j;

    cin >> t;

    while (t--)
    {
        int current= 0;
        long long int sum = 1;
        int distance= 0;

        cin >> n;
        long long int a[n];

        for (i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n;i++);
        int f=0;

        for (i=0;i<n;i++)
        { if (a[i] % 4 == 0||a[i] % 2 != 0)
                distance++;
                sum = a[i];
                f=a[i]%2;
            for (j = i + 1; j < n; j++)
            {
            sum =a[j]*sum;
            if (sum % 4 == 0||sum % 2 != 0 )
                current++;
                f--;
            }

            sum=1;
        }
        long int ans=current+distance;
        cout <<ans<< endl;
    }

    return 0;
}

