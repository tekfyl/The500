#include <bits/stdc++.h>

#define all(c) c.begin(), c.end()
#define ll long long
#define pb push_back
#define vi vector<int>
#define vll vector<ll>
#define vvi vector< vi >
#define vvl vector< vector<ll> >
#define mk make_pair
#define ii pair <int, int>
#define LL pair <ll, ll>
#define fi first
#define se second
#define mx max_element
#define mn min_element
#define rep(i,n)    for(__typeof(n) i = 0; i < n; i++)
#define rep1(i,n)   for(__typeof(n) i = 1; i <= n; i++)
using namespace std;

int dp[200][200];

int mcm(vi v, int i, int j){
    if(i+1 >= j) return 0;
    int min = INT_MAX;
    if(dp[i][j] == 0){
    for(int k = i+1; k<j; k++){
        int cost = mcm(v, i, k);
        cost += mcm(v, k, j);
        cost += v[i]*v[k]*v[j];
        if(cost < min){
            min = cost;
        }
    }
    dp[i][j] = min;
    }
    return dp[i][j];
}


int main(){
    int n,in;
    cin >> n;
    vi v;
    rep(i,n) cin >> in, v.pb(in);
    cout << mcm(v,0,n-1);
    return 0;
}

