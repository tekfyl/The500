#include<bits/stdc++.h>

using namespace std;

#define M 5
#define N 5

string expand(string s, int l, int r){
    while(l > -1 && r < (int)s.size() && s[l] == s[r]) l--, r++;
    return s.substr(l+1, r-l-1);
}

string PalinSubs(string A){
    int n = A.size();
    if(n <= 1) return A;
    string ans;
    
    for(int i=0; i<A.size()-1; i++){
        string sm, tm;
        sm = expand(A, i, i);
        tm = expand(A, i, i+1);
        if(sm.size() > ans.size()) ans = sm;
        if(tm.size() > ans.size()) ans = tm;
    }
    return ans;
}

int main(){
    string A = "bb";
    cout << PalinSubs(A);
    return 0;
}
