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

int n, m ,v1, v2, s;
int N = 5555;
vi vis(N,0), path(N), dis(N, N);
vvi g(N);
map<ii , int> w;
vi ans;
priority_queue<ii, vector<ii > , greater<ii >  > q;

void Dij(int s){
    dis[s] = 0;
    q.push(mk(0,s));
    while(!q.empty()){
        s = q.top().se; q.pop();
        vis[s] = 1;
        for(int v:g[s]){
            if(!vis[v]){
                int cost = dis[s]+w[mk(s,v)];
                if(dis[v] > cost){
                    dis[v] = cost;
                    q.push(mk(cost, v));
                    path[v] = s;
                }
            }
        }
    }
    cout << dis[n] << endl;
}

int main(){
    cin >> n >> m;
    rep(i,m){
        int t;
        cin >> v1 >> v2 >> t;
        g[v1].pb(v2);
        g[v2].pb(v1);
        w[mk(v1,v2)] = w[mk(v2,v1)] = t;
    }
    Dij(1);
    int s = n;
    while(s != 0){
        ans.pb(s); s = path[s];
    }
    reverse(all(ans));
    for(int v:ans) cout << v << " ";
    return 0;
}

