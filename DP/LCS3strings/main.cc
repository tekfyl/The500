#include <bits/stdc++.h>

using namespace std;

void lcs(string str1, string str2, string str3){
    int n = str1.length(), m = str2.length(), k = str3.length();
    
    vector<vector<vector<int> > > lookup(n+1, vector<vector<int> >(m+1, vector<int>(k+1, 0)));
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            for(int z=1; z<=k; z++){
                if(str1[i-1] == str2[j-1] && str2[j-1] == str3[z-1]){
                lookup[i][j][z] = lookup[i-1][j-1][z-1] + 1;
                }
                else{
                lookup[i][j][z] = max(lookup[i-1][j][z], max(lookup[i][j-1][k], lookup[i][j][z-1]));
                }
            }
        }
    }
    
    cout << lookup[n][m][k];
}

int main(){
    string a = "ABCBDAB", b = "BDCABA", c = "BADACB";
    lcs(a,b,c);
    return 0;
}
