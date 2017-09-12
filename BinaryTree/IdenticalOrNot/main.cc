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

struct Node{
    int data;
    Node *left, *right;
}

int isIdentical(Node *x, Node *y){
    if(x == NULL && y == NULL) return 1;
    else if(x == NULL || y == NULL) return 0;
    else if(x->data == y->data){
    return isIdentical(x->left, y->left) && isIdentical(x->right, y->right);
    }
    else return 0;
}

int main(){

    return 0;
}

