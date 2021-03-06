/*

                     !!!!!!
                    !!!!!!!!!!
                     !!!!!!!!!!!!!!!
                       !!!!!!!!!!!!!!
                     !!!!!!!!!!!!!!!
                      !!!!!!!!!!!!
                      !!!!!!!!!!!!
                        !!!!!!!!!!!!
                        !!!!!!!!
                        !!!!!!!!!!
                       !!!!!!!!!!!!!!
                     !!!!!!!!!!!!!!!!
                    !!!!!!!!!!!!!!!!                                  !!!!!
                  !!!!!!!!!!!!!!!!!!!                               !!!!!!!!!!
                 !!!!!!!!!!!!!!!!!!!!!!!                 !         !!!!!!!!!!
            !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!              !!     !!!!!!!!!!!!
           !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!        !!      !!!!!!!!
            !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
             !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! !!!!!!!!!!!!
              !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!  !!!!!!!!!!!!
       !!!!!! !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!        !!!!!!
      !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!      !!!!!
          !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!        !!!
        !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!        !
          !!!!!! !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
           !!!!! !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
                  !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
                 !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
                  !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
                  !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
                  !!!!!!!!!!!!!!!!!!!!!!!!!!!!
                  !!!!!!!!!!!!!!!!!!!!!!!!!!
                  !!!!!!!!!!!!!!!!!!!!!!!!!
                   !!!!!!!!!!!!!!!!!!!!!!!!
                    !!!!!!!!!!!!!!!!!!!!
                    !!!!!!!!!!!!!!!!!!!
                     !!!!!!!!!!!!!!!!
                      !!!!!!!!!!!!!!!!
                      !!!!!!!!!!!!!!!
                       !!!!!!!!!!!!!!
                        !!!!!!!!!!!!
                        !!!!!!!!!!!!
                        !!!!!!!!!!!!
                          !!!!!!!!
                          !!!!!!
                           !!!!

*/

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

int n,m,s,p,v1,v2;
vi vis(200,0);
vvi g(400);

int dfs(int s, int p){
    vis[s] = 1;
    for(int v:g[s]){
        if(!vis[v]){
            if(!dfs(v,s)) return 0;
        }
        else if(v != p){
            return 0;
        }
    }
    return 1;
}

int main(){
    cin >> n >> m;
    rep(i,m){
        cin >> v1 >> v2;
        g[v1].pb(v2);
        g[v2].pb(v1);
    }
    if(dfs(1,-1)){
        cout << "Tree - No cycle";
    }
    else{
        cout << "Cycle Present";
    }
    return 0;
}

