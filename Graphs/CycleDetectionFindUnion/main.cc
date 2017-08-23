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

map<int, int> parent;

void makeSet(int i){
    parent[i] = i;
}

int Find(int k){
    if(parent[k] == k){
        return k;
    }
    return Find(parent[k]);
}

void Union(int a,int b){
    int x = Find(a);
    int y = Find(b);
    parent[x] = y;
}



int main(){
    int n,m,v1,v2;
    cin >> n >> m;
    vector<ii > v;
    rep(i,m){
        cin >> v1 >> v2;
        //g[v1].pb(v2);
        v.pb(mk(v1,v2));
        // taking input like this for an undirected graph here to consider all edges once only
    }
    rep1(i,n){
        makeSet(i);
    }

    // m times - edges input
        for(auto c:v){
            int x = Find(c.fi);
            int y = Find(c.se);
            if(x == y){
                cout << "CYCLE";
                return 0;
            }
            else{
                Union(x,y);
            }
        }
    
    cout << "NO CYCLE";
    return 0;
}

