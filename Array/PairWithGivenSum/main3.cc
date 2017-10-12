#include <bits/stdc++.h>

using namespace std;

void findPair(const vector<int> &data, int sum){
    unordered_map<int,int> check;
    
    for(int i=0; i<(int)data.size(); i++){
        int see = sum-data[i];
        if(check.find(see) != check.end()){
            cout << check[see] << " " << i;
            return;
        }
        check[data[i]] = i;
    }
}

int main() {
    int n,k;
    cin >> n >> k;
    vector<int> data;
    for(int i=0; i<n; i++){
        int in;
        cin >> in;
        data.push_back(in);
    }
    findPair(data,k);
  return 0;
}

