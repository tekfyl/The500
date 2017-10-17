#include <bits/stdc++.h>

using namespace std;

void CoinChangeMaking(){
    int coins[] = {1, 3, 5, 7};
    int sum = 15;
    int n = 4;
    
    vector<vector<int> > lookup(n, vector<int> (sum+1, 99999));
    
    for(int i=0; i<n; i++){
        lookup[i][0] = 0;
    }
    
    for(int j=1; j<=sum; j++){
        if(j%coins[0] == 0){
            lookup[0][j] = j/coins[0];
        }
    }
    
    for(int i=1; i<n; i++){
        for(int j=1; j<=sum; j++){
            if(j >= coins[i]){
                lookup[i][j] = min(lookup[i-1][j], 1+lookup[i][j-coins[i]]);
            }
            else{
                lookup[i][j] = lookup[i-1][j];
            }
        }
    }
    
    cout << lookup[n-1][sum];
}

int main(){
    CoinChangeMaking();
    return 0;
}
