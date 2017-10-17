#include <bits/stdc++.h>

using namespace std;

void RodCutting(){
    int length[] = {1,2,3,4,5,6,7,8};
    int price[] = {1,5,8,9,10,17,17,20};
    int n = 4;
    
    vector<vector<int> > lookup(8, vector<int> (n+1, 0));
    
    for(int j=1; j<=n; j++){
        if(j >= length[0]){
            lookup[0][j] = j/length[0]*price[0]; 
        }
    }
    
    for(int i=1; i<8; i++){
        for(int j=1; j<=n; j++){
            if(j >= length[i]){
                lookup[i][j] = max(lookup[i-1][j], price[i]+lookup[i][j-length[i]]);
            }
            else{
                lookup[i][j] = lookup[i-1][j];
            }
        }
    }
    
    cout << lookup[7][n]; 
}

int main(){
    RodCutting();
    return 0;
}
