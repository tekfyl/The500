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
    int n,k,in;
    cin >> n;
    vi v;
    vi st;
    rep(i,n){
        cin >> in;
        v.pb(in);
    }
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            for(int c:st){
                cout << c << " ";
            }
            k++; cout << v[j] << " ";
            st.pb(v[j]);
        cout << endl;
        }
        st.clear();
        cout << endl;
    }
    cout << k;
    return 0;
}

