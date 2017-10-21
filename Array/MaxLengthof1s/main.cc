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
    int n;
    cin >> n;
    vi v;
    rep(i,n){
        int in;
        cin >> in;
        v.pb(in);
    }
    int l = 0, r=0, zero=0, ans = 0;
    for(r=0; r<n; r++){
        if(v[r] == 0) zero++;
        while(zero > 1){ 
            if(v[l] == 0) zero--; 
            l++;
        }
        ans = max(ans, r-l+1);
    }
    cout << ans;
    return 0;
}

