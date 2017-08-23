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

map<int,int> parent;

void makeSet(int i){
    parent[i] = i;
}

int Find(int k){
    return parent[k] == k ? k : Find(parent[k]);
}

void Union(int a, int b){
    int x = Find(a);
    int y = Find(b);
    parent[x] = y;
}

vector< pair<int, ii> > v, mst;
int n,m,v1,v2,t,temp,w=0;
int main(){
    cin >> n >> m;
    rep(i,m){
        cin >> v1 >> v2 >> t;
        v.pb(mk(t, mk(v1,v2)));
    }
    sort(all(v));
    rep(i,n){
        makeSet(i);
    }

    for(auto temp : v){
        int x = Find(temp.se.fi);
        int y = Find(temp.se.se);
        if(x!=y){
            mst.pb(temp);
            Union(x,y);
            w += temp.fi;
        }
        if(mst.size() == n-1) break;
    }
    cout << w << endl;
    for(auto temp:mst){
        cout << temp.se.fi << " " << temp.se.se << " " << temp.fi << endl;
    }
    return 0;
}

