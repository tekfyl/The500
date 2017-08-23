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
    //taking in as adgecency matrix
    rep(i,n){
        rep(j,n){
            cin >> g[i][j];
            cost[i][j] = g[i][j];

            if(i == j){
                path[i][j] = 0;
            }
            else if(cost[i][j] != INT_MAX){
                path[i][j] = i;
            }
            else
                path[i][j] = -1;
        }
    }

    rep(k,n){
        rep(u,n){
            rep(v,n){
                if(cost[u][k] != INT_MAX && cost[k][v] != INT_MAX && cost[u][k] + cost[k][v] < cost[u][v]){
                    cost[u][v] = cost[u][k] + cost[k][v];
                    path[u][v] = path[k][v];
                }
            }
            if(cost[u][u] < 0){
                cout << "Negative Cycle";
                return 0;
            }
        }
    }
    
    return 0;
}

