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
    int n, k;
    vi v;
    cin >> n >> k;
    rep(i,n){
        int in;
        cin >> in;
        v.pb(in);
    }
    sort(all(v));
    int l = 0, r = n-1;
    while(l < r){
        int sum = v[l]+v[r];
        if(sum == k){
            cout << v[l] << " " << v[r];
            return 0;
            cout << endl;
        }
        else if(sum < k) l++;
        else r--;
    }
    return 0;
}

