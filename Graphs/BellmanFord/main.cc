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
    cin >> n >> m;
    rep(i,m){
        cin >> v1 >> v2 >> t;
        v.pb(mk(t, mk(v1, v2)));
    }
    dis[0] = 0;
    int k = n;
    // running it n-1 times
    while(--k){
        rep(i, m){
            int u,v,w;
            w = v[i].fi;
            u = v[i].se.fi; v = v[i].se.se;
            int cost = dis[u] + w;
            if(dis[u] != INT_MAX && dis[v] > cost){
                dis[v] = cost;
                path[v] = u;
            }
        }
    }

    rep(i,m){
        int u,v,w;
        w = v[i].fi;
        u = v[i].se.fo; v = v[i].se.se;
        int cost = dis[u] + w;
        if(dis[u] != INT_MAX && dis[v] > cost){
            cout << "Negative Cycle";
            return 0;
        }
    }
    return 0;
}

