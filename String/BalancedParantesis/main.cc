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

// To execute C++, please define "int main()"
void print(int pos, int n, int open, int close){
    static vector<char> str(100);
    if(close == n){
        for(int i=0; i<2*n; i++) cout << str[i];
        cout << endl;
        return;
    }
    else{
        if(open < n){
            str[pos] = '(';
            print(pos+1, n, open+1, close);
        }
        if(close < open){
            str[pos] = ')';
            print(pos+1, n, open, close+1);
        }
    }
}

int main() {
    int n;
    cin >> n;
    if(n > 0){
        print(0,n,0,0);
    }
}

