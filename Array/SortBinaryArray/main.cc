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

int in,n,i=0,k=0;
vi v;


int main(){
    cin >> n;
    rep(i,n) cin >> in, v.pb(in);
    for(i=0; i<n; i++){
        if(v[i] == 0) v[k]=0, k++;
    }
    while(k<n){
        v[k] = 1;
        k++;
    }
    for(int c:v) cout << c << " ";
    return 0;
}

