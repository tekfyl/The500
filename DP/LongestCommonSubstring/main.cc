#include <bits/stdc++.h>

using namespace std;

void lcs(string str1, string str2){
    int n = str1.size(), m = str2.size();
    
    vector<vector<int> > lookup(n+1, vector<int> (m+1, 0));
    int maxlen = INT_MIN, endingIndex;
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(str1[i-1] == str2[j-1]){
                lookup[i][j] = lookup[i-1][j-1]+1;
            }
            
            if(maxlen < lookup[i][j]){
                maxlen = lookup[i][j];
                endingIndex = i;
            }
        }
    }
    
    cout << str1.substr(endingIndex-maxlen, maxlen);
}

int main(){
    string a = "hrmtusharwqy", b = "cxtusharlm";
    lcs(a,b);
    return 0;
}
