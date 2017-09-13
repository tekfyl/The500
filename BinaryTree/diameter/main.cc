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

int diameter(Node *root, int &diameter){
    if(root == NULL) return 0;
    int l = diameter(root->left, diameter);
    int r = diameter(root->right, diameter);
    int max_d = l + r + 1;
    diameter = max(diameter, max_d);
    return max(l,r)+1;
}

int main(){

    return 0;
}

