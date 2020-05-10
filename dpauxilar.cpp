#include <iostream>
using namespace std;
int binarycoeff(int n,int k)
{

    if(n==k || k==0)
        return 1;
    else
        return binarycoeff((n-1)*(k-1),(n-1)*(k));
}

int main()
{
    int n,k;
    cin>>n;
    cin>>k;
    binarycoeff(n,k);

}

