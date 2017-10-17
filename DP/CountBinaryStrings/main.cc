#include <bits/stdc++.h>

using namespace std;

void countBinaryStrings(int n){
    vector<vector<int> > lookup(n+1, vector<int> (2,0));
    lookup[1][0] = 2, lookup[1][1] = 1;
    
    for(int i=2; i<=n; i++){
        lookup[i][0] = lookup[i-1][0] + lookup[i-1][1];
        lookup[i][1] = lookup[i-1][0];
    }
    
    cout << lookup[n][0];
}

int main(){
    countBinaryStrings(5);
    return 0;
}
