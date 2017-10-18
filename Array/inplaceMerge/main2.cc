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

int main(){
    int n,m,in;
    vi v1, v2, v;
    cin >> n >> m;
    rep(i,n) cin >> in, v1.pb(in);
    rep(i,m) cin >> in, v2.pb(in);
    merge(all(v1), all(v2), back_inserter(v));
    for(int c:v){
        cout << c << " ";
    }
    return 0;
}

