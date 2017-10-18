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


int in,n,k=0,sum=0,count=0;
map<int,int> m;
vi v;

int main(){
    cin >> n;
    rep(i,n) cin >> in, v.pb(in);
    map<int, int> m;
    m[0]++;
    sum = 0;
    rep(i,n){
        sum += v[i];
        k += m[sum];
        m[sum]++;
    }
    cout << k << endl;
    return 0;
}

