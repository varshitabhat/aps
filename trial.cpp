#include <iostream>
using namespace std;
int main()
{

    long long int t, n, i, j, a[100000];

    cin >> t;

    while (t--)
    {

        int c = 0, d = 0;

        long long int sum = 1;

        cin >> n;

        for (i = 0; i < n; i++)
            cin >> a[i];

        for (i = 0; i < n; i++)
        {

            if (a[i] % 2 != 0 || a[i] % 4 == 0)

                d++;
            sum = a[i];
            for (j = i + 1; j < n; j++)
            {

                sum = sum * a[j];



                if (sum % 2 != 0 || sum % 4 == 0)

                    c++;
            }

            sum = 1;
        }

        cout << c + d << endl;
    }

    return 0;
}

