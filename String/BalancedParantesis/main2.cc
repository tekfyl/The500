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

int c = 0;

void print(int n, int open, int close, string str){
    if(close == n){
        cout << str << endl; c++; return;
    }
    if(open < n) print(n, open+1, close, str+'(');
    if(close < open) print(n, open, close+1, str+')');
}

int main() {
    int n;
    cin >> n;
    string str;
    if(n > 0){
        print(n,0,0,str);
    }
    cout << c << endl;
}
