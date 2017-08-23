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

// 3 operations using hashtables

map<int,int> parent;
map<int,int> rank;

void makeSet(vi v){
    for(int i:v){
        parent[i] = i;
        // rank[i] = 0;
    }
}

int Find(int k){
    if(parent[k] == k){
        return k;
    }
    return Find(parent[k]);
}

void Union(int a, int b){
    int x = Find(a);
    int y = Find(b);

    parent[x] = y;

    ///////// by rank method
    
    int x = Find(a);
    int y = Find(b);
    if(x==y) return;

    if(rank[x] > rank[y]){
        parent[y] = x;
    }
    else if(rank[y] > rank[x]){
        aprent[x] = y;
    }
    else{
        parent[x] = r;
        rank[y]++;
    }
}


int main(){
    
    return 0;
}

