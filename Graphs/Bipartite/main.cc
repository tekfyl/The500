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

int n,m,v1,v2,s;
vi level(500), vis(500,0);
vvi g(500);
vi q;

int Bi(int s){
    vis[s] = 1;
    level[s] = 0;
    //cout << s << " ";
    q.pb(s);
    while(!q.empty()){
        s = q.front(); q.erase(q.begin());
        for(auto v:g[s]){
            if(!vis[v]){
                //cout << v << " ";
                level[v] = level[s]+1;
                vis[v] = 1;
                q.pb(v);
            }
            else{
                if(level[s] == level[v]){
                    return 0;
                }
            }
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
    
    //cout << Bi(1) << endl;
    Bi(1);
    if(Bi(1)){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    
    return 0;
}

