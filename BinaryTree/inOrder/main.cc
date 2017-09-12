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

// iterative
void inOrder(Node *root){
    stack<int> st;
    Node *curr = root;
    while(curr != NULL || !st.empty()){
        if(curr != NULL){
            st.push(curr);
            curr = curr->left;
        }
        else{
            curr = st.top();
            st.pop();
            cout << curr->data << " ";
            curr = curr->right;
        }
    }
}

// recursive
void inOrder(Node *root){
    if(root == NULL) return;

    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

int main(){

    return 0;
}

