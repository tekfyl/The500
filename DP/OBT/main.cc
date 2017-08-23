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

int obt(vi v, int i, int j, int level){
    if(j < i) return 0;
    int optcost = INT_MAX;
    for(int k=i; k<=j; k++){
        int leftOptCost = obt(v, i, k-1, level+1);
        int rigthOptCost = obt(v, k+1, j, level+1);
        optcost = min(optcost, v[k]*level + leftOptCost + rigthOptCost);
    }
    return optcost;
}

int main(){
    int n;
    cin >> n;
    vi v; int in;
    rep(i,n) cin >> in, v.pb(in);
    cout << obt(v, 0, n-1, 1);
    return 0;
}

