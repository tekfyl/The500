#include <bits/stdc++.h>

using namespace std;

#define n 6

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
    int data[] = {7, 3, 1, 4, 5,  8};
    int sum=0;
    for(int i=0; i<n; i++){
        sum += data[i];
    }
    if(sum%2){
        cout << "NO";
    }
    else{
        partition(data, sum/2);
    }
    return 0;
}
