#include <bits/stdc++.h>
#include <unordered_set>

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

int in,n,k;
vi v;


int main(){
    cin >> n >> k;
    int in;
    rep(i,n) cin >> in, v.pb(in);
    unordered_set<int> diff;
    diff.insert(k-v[0]);
    for(int i=1; i<v.size(); i++){
        if(find(all(diff), v[i]) != diff.end()){
            cout << "YES" << endl;
            return 0;
        }
        else{
            diff.insert(k-v[i]);
        }
    }
    cout << "NO" << endl; 
    return 0;
}

