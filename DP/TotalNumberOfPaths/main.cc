#include <bits/stdc++.h>

using namespace std;

#define M 4
#define N 4

void TotalNumberOfpaths(int mat[M][N]){
    vector<vector<int> > lookup(M, vector<int> (N, 1));
    
    for(int i=1; i<M; i++){
        for(int j=1; j<N; j++){
            lookup[i][j] = lookup[i-1][j] + lookup[i][j-1];
        }
    }
    
    cout << lookup[M-1][N-1];
}

int main(){
    int mat[M][N] = 
    { 
        { 4, 7, 1, 6 },
        { 5, 7, 3, 9 },
        { 3, 2, 1, 2 },
        { 7, 1, 6, 3 }
    };
    TotalNumberOfpaths(mat);
    return 0;
}
