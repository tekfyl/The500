int WildCardMatch(string &s, string &p){
    int m = s.size();
    int n = p.size();
    
    vector<vector<int> > lookup(m+1, vector<int> (n+1, 0));
    lookup[0][0] = 1;
    
    for(int i=1; i<=m; i++) lookup[i][0] = 0;
    for(int j=1; j<=n; j++){
        if(p[j-1] == '*'){
            lookup[0][j] = lookup[0][j-1];
        }
    }
    
    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            if(s[i-1] == p[j-1] || p[j-1] == '?'){
                lookup[i][j] = lookup[i-1][j-1];
            }
            else if(p[j-1] == '*'){
                lookup[i][j] = lookup[i-1][j] | lookup[i][j-1];
            }
            else 
                lookup[i][j] = 0;
        }
    }
    
    return lookup[m][n];
}
