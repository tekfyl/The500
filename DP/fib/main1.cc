#include <bits/stdc++.h>

using namespace std;

void fib(int n){
    int prev1=1, prev2=0;
    for(int i=0; i<n; i++){
        int fib = prev1 + prev2;
        cout << fib << " ";
        prev2 = prev1;
        prev1 = fib;
    }
}

int main() {
    fib(18);
  return 0;
}
