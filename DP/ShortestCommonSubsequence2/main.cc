#include <bits/stdc++.h>

using namespace std;

void scs(string str1, string str2){
    int n = str1.size(), m = str2.size();
    
    vector<vector<int> > lookup(n+1, vector<int> (m+1, 0));
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(str1[i-1] == str2[j-1]){
                lookup[i][j] = lookup[i-1][j-1]+1;
            }
            else{
                lookup[i][j] = max(lookup[i-1][j], lookup[i][j-1]);
            }
        }
    }
    
    int lcsLength = lookup[n][m];
    
    cout << m+n-lcsLength;
}

int main(){
    string a = "ABCBDAB", b = "BDCABA";
    scs(a,b);
    return 0;
}
