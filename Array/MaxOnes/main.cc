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
    int n,k;
    cin >> n >> k;
    vi v;
    for(int i=0; i<n; i++){
        int in;
        cin >> in;
        v.push_back(in);
    }
    int ans = 0, zero=0, l = 0;
    for(int i=0; i<n; i++){
        if(v[i] == 0) zero++;
        if(zero > k){
            while(v[l]) l++;
            l++;
            zero = k;
        }
        ans = max(ans, i-l+1);
    }
    cout << ans;
    return 0;
}

