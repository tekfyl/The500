#include <bits/stdc++.h>

using namespace std;

#define N 10

void KnapSack(int value[], int weight[]){
    int n = 2;
    vector<vector<int> > lookup(n, vector<int> (N+1,0));
    
    for(int j=0; j<=N; j++){
        if(j >= weight[0]){
            lookup[0][j] = value[0];
        }
    }
    
    for(int i=1; i<n; i++){
        for(int j=1; j<=N; j++){
            if(j < weight[i]){
                lookup[i][j] = lookup[i-1][j];
            }
            else{
                lookup[i][j] = max(lookup[i-1][j], value[i]+lookup[i-1][j-weight[i]]);
            }
        }
    }
    
    cout << lookup[n-1][N] << endl;
    
    for(auto d:lookup){
        for(auto c:d){
            cout << c << " ";
        }
        cout << endl;
    }
}

int main(){
    int value[] = {37, 28};
    int weight[] = {7, 76};
    //int n = (int)sizeof(value)/sizeof(value[0]);
    //cout << n << endl;
    KnapSack(value, weight);
    return 0;
}
