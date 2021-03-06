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
    vector<int> v;
    rep(i,n){
        int in;
        cin >> in;
        v.push_back(in);
    }
    vi inc(n,1), dec(n,1);
    for(int i=1; i<n; i++){
        if(v[i] > v[i-1]) inc[i] = inc[i-1]+1; 
    }
    for(int i=n-2; i>-1; i--){
        if(v[i] > v[i+1]) dec[i] = dec[i+1] + 1;
    }
    for(int i=0; i<n; i++){
        inc[i] = inc[i]+dec[i]-1;
    }
    //for(int c:dec) cout << c << " ";
    cout << *max_element(inc.begin(), inc.end());
    return 0;
}

