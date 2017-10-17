#include <bits/stdc++.h>

using namespace std;

void editDis(string str1, string str2){
    int n = str1.size(), m = str2.size();
    
    vector<vector<int> > lookup(n+1, vector<int> (m+1, 0));
    
    for(int i=0; i<=n; i++){
        lookup[i][0] = i;
    }
    for(int j=0; j<=m; j++){
        lookup[0][j] = j;
    }
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(str1[i-1] == str2[j-1]){
                lookup[i][j] = lookup[i-1][j-1];
            }
            else{
                lookup[i][j] = min(lookup[i-1][j], min(lookup[i][j-1], lookup[i-1][j-1])) + 1;
            }
        }
    }
    
    cout << lookup[n][m];
}

int main(){
    //int data[] = {0, 8, 4, 12, 2, 10, 6, 14, 1, 9, 5, 13, 3, 11};
    //int data[] = {4, 2, 5, 9, 7, 6, 10, 3, 1};
    //int n = sizeof(data)/sizeof(data[0]);
    string a = "kitten", b = "sitting";
    editDis(a, b);
    return 0;
}
