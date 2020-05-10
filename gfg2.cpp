#include <bits/stdc++.h>
using namespace std;

#define SIZE 3

int A[SIZE] = {1,2,3};   //original array
int L[SIZE] = {0};     //L array explained
int N[SIZE];                                //N[i] = index of next non-zero element in L


void preprocess(){
    for(int i = 0; i < SIZE; i++){
        if(A[i] % 4 == 0) L[i] = 2;
        else if(A[i] % 2 == 0) L[i] = 1;
        else L[i] = 0;
    }
    int next = -1;
    for(int i = SIZE - 1; i >= 0; i--){
        N[i] = next;
        if(L[i] != 0) next = i;
    }
}

int calc(){
    int ans = 0;
    for(int i = 0; i < SIZE; i++){
        if(L[i] == 0) {
            if(N[i] == -1) return ans;
            else if(L[N[i]] == 1){
                if(N[N[i]] == -1){       //all after that 1 is 0
                    ans += SIZE - N[i];
                }
                else {                  //exists 1 or 2 after the 1
                    ans += N[N[i]] - N[i];
                }
            }
        }
        else if(L[i] == 1) {
            if(N[i] == -1) return ans + SIZE - i;
            else {
                ans += N[i] - i;
            }
        }
    }
    return ans;
}

int main(){
    preprocess();

    int total = (SIZE * (SIZE + 1))/2;

    cout<<"answer = "<<total - calc()<<endl;

}
