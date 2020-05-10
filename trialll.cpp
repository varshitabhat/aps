
#include <bits/stdc++.h>
using namespace std;
int main(){

int n,i,ans;
cin>>n;
int A[n],L[n]={0},N[n];
for(i=0;i<n;i++)
    cin>>A[n];
    for(int i = 0; i < n; i++){
        if(A[i] % 4 == 0) L[i] = 2;
        else if(A[i] % 2 == 0) L[i] = 1;
        else L[i] = 0;
    }
    int next = -1;
    for(int i = n - 1; i >= 0; i--){
        N[i] = next;
        if(L[i] != 0) next = i;
    }

    ans = 0;
    for(int i = 0; i < n; i++){
        if(L[i] == 0) {
            if(N[i] == -1)
                break;
            else if(L[N[i]] == 1){
                if(N[N[i]] == -1){       //all after that 1 is 0
                    ans += n - N[i];
                }
                else {                  //exists 1 or 2 after the 1
                    ans += N[N[i]] - N[i];
                }
            }
        }
        else if(L[i] == 1) {
            if(N[i] == -1)
                {ans=ans + n - i;
                break;
            }
            else {
                ans += N[i] - i;
            }
        }
    }



    int total = (n * (n + 1))/2;
    cout<<total<<" "<<ans<<endl;

    cout<<"answer = "<<total - ans<<endl;

}
