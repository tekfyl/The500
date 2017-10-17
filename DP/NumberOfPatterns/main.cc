#include <bits/stdc++.h>

using namespace std;

void NumberOfTimesPattern(){
    string text = "subsequence";
    string pattern = "sue";
    
    int n = text.size();
    int m = pattern.size();
    
    vector<vector<int> > lookup(n+1, vector<int> (m+1, 0));
    
    for(int i=0; i<=n; i++){
        lookup[i][0] = 1;
    }
    
    for(int j=1; j<=m; j++){
        lookup[0][j] = 0;
    }
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(text[i-1] == pattern[j-1]){
                lookup[i][j] = lookup[i-1][j-1] + lookup[i-1][j];
            }
            else{
                lookup[i][j] = lookup[i-1][j];
            }
        }
    }
    cout << lookup[n][m];
}

int main(){
    NumberOfTimesPattern();
    return 0;
}
