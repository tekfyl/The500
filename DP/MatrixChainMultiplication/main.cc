#include <bits/stdc++.h>

using namespace std;

vector<vector<int> > lookup(200, vector<int> (200, 0));

int mcm(int dims[], int i, int j){
    if(i+1 >= j) return 0;
    int min = INT_MAX;
    if(lookup[i][j] == 0){
        for(int k=i+1; k<j; k++){
            int cost;
            cost = mcm(dims, i, k);
            cost += mcm(dims, k, j);
            cost += dims[i]*dims[j]*dims[k];
            if(cost < min){
                min = cost;
            }
        }
        lookup[i][j] = min;
    }
    return lookup[i][j];
}

int main(){
    int dims[] = {10, 30, 5, 60};
    int n = sizeof(dims)/sizeof(dims[0]);
    cout << mcm(dims, 0, n-1);
    return 0;
}
