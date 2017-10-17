#include <bits/stdc++.h>

using namespace std;

#define M 8
#define N 6

void findLargestSquare(int mat[][N]){
    int ans = 0;
    vector<vector<int> > lookup(M, vector<int> (N,0));
    
    for(int i=0; i<M; i++) lookup[i][0] = mat[i][0];
    for(int j=0; j<N; j++) lookup[0][j] = mat[0][j];
    
    for(int i=1; i<M; i++){
        for(int j=1; j<N; j++){
            if(mat[i][j] == 1){
                lookup[i][j] = min(lookup[i-1][j], min(lookup[i][j-1], lookup[i-1][j-1])) + 1;
                ans = max(lookup[i][j], ans);
            }
        }
    }
    cout << ans;
}

int main(){
    
    int mat[][N] = {
        { 0, 0, 1, 0, 1, 1 },
        { 0, 1, 1, 1, 0, 0 },
        { 0, 0, 1, 1, 1, 1 },
        { 1, 1, 0, 1, 1, 1 },
        { 1, 1, 1, 1, 1, 1 },
        { 1, 1, 0, 1, 1, 1 }, 
        { 1, 0, 1, 1, 1, 1 },
        { 1, 1, 1, 0, 1, 1 }
    };
    findLargestSquare(mat);
    return 0;
}
