#include <bits/stdc++.h>

using namespace std;

#define n 5

void partition(int data[], int sum){
    vector<vector<bool> > lookup(n, vector<bool> (sum+1, false));
    
    for(int i=0; i<n; i++){
        lookup[i][0] = true;
    }
    
    for(int j=0; j<=sum; j++){
        if(j == data[0]) lookup[0][j] = true;
    }
    
    for(int i=1; i<n; i++){
        for(int j=1; j<=sum; j++){
            if(j < data[i]){
                lookup[i][j] = lookup[i-1][j];
            }
            else{
                lookup[i][j] = lookup[i-1][j] || lookup[i-1][j-data[i]];
            }
        }
    }
    
    if(lookup[n-1][sum]){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}

int main(){
    int data[] = {7, 3, 2, 5,  8};
    int sum=14;
    
        partition(data, sum);
    
    return 0;
}
