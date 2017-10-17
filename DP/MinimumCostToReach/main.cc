#include <bits/stdc++.h>

using namespace std;

#define M 5
#define N 5

void MinCost(int cost[M][N]){
    vector<vector<int> > lookup(M, vector<int> (N, 0));
    
    lookup[0][0] = cost[0][0];
    
    for(int i=1; i<M; i++){
        lookup[i][0] = lookup[i-1][0] + cost[i][0];
    }
    
    for(int j=1; j<N; j++){
        lookup[0][j] = lookup[0][j-1] + cost[0][j];
    }
    
    for(int i=1; i<M; i++){
        for(int j=1; j<N; j++){
            lookup[i][j] = cost[i][j] + min(lookup[i-1][j], lookup[i][j-1]);
        }
    }
    
    cout << lookup[M-1][N-1];
}

int main(){
    int cost[M][N] = 
    {
        { 4, 7, 8, 6, 4 },
        { 6, 7, 3, 9, 2 },
        { 3, 8, 1, 2, 4 },
        { 7, 1, 7, 3, 7 },
        { 2, 9, 8, 9, 3 }
    };
    MinCost(cost);
    return 0;
}
