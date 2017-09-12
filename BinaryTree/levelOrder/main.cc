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

void levelOrder(Node *root){
    if(root == NULL) return;
    
    queue<Node*> q;
    q.push(root);
    Node *curr = NULL;
    while(!q.empty()){
        curr = q.front();
        q.pop();
        cout << curr->data << " ";
        if(curr->left != NULL) q.push(curr->left);
        if(curr->right != NULL) q.push(curr->right);
    }
}

int main(){

    return 0;
}

