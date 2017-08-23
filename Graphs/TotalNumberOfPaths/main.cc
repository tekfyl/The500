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

int dest,n,t,m,v1,v2;
vvi g(200);
queue<ii > q;

int bfs(int s){
    int cnt = 0;
    q.push(mk(s,0));
    while(!q.empty()){
        int s = q.front().fi, dep = q.front().se;
        q.pop();
        if(dep > t) break;
        if(dep == t && s == dest) cnt++;
        for(int v:g[s]){
            q.push(mk(v,dep+1));
        }
    }
    return cnt;
}


int main(){
    cin >> n >> m;
    rep(i,m){
        cin >> v1 >> v2;
        g[v1].pb(v2);
    }
    int s;
    cin >> t >> s >> dest;
    cout << bfs(s) << endl;
    return 0;
}

