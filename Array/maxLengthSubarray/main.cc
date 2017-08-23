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
    int n, k,ans=0,len=0;
    cin >> n >> k;
    int sum = 0;
    map<int, int> m;
    int in,start=0, end=0;
    vi v;
    m[0] = -1; // for zero sum
    rep(i,n){
        cin >> in;
        v.pb(in);
        sum += in;
        if(m.find(sum) == m.end()){
            m[sum] = i;
        }
        if(m.find(sum-k) != m.end()){
            len = i - m[sum-k];
            ans = max(ans,len);
            if(ans == len){
                start = m[sum-k]+1;
                end = i;
            }
        }
    }
    cout << ans << endl;
    for(int i = start; i<=end; i++){
        cout << v[i] << " ";
    }
    return 0;
}

