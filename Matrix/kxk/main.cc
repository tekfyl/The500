#include<bits/stdc++.h>

using namespace std;

#define M 5
#define N 5

void findMaxSum(int mat[M][N], int k){
    vector<vector<int> > sum(M-k+1, vector<int> (N-k+1, 0));
    
    for(int j=0; j<N; j++){
        for(int i=0; i<k; i++)
            sum[0][j] += mat[i][j];
        
        for(int i=1; i<M-k+1; i++)
        sum[i][j] = sum[i-1][j] - mat[i-1][j] + mat[i+k-1][j]; 
    }
    
    for(int i=0; i<M-k+1; i++){
        int sumi = 0;
        for(int j=0; j<k; j++)
            sumi += sum[i][j];
        cout << sumi << " ";
        
        for(int j=1; j<N-k+1; j++){
            sumi += (sum[i][j+k-1] - sum[i][j-1]);
            cout << sumi << " ";
        }
        cout << endl;
    }
}

int main(){
    int k = 3;
    int mat[5][5] = {
                        {1,1,1,1,1}, 
                        {2,2,2,2,2}, 
                        {3,3,3,3,3}, 
                        {4,4,4,4,4}, 
                        {5,5,5,5,5}
                    };
    findMaxSum(mat, k);
    return 0;
}
