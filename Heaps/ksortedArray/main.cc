#include <bits/stdc++.h>
using namespace std;

void sort(const vector<int> &data, int k){
    vector<int> ans;
    priority_queue<int, vector<int>, greater<int> > pq;
    int i=0;
    for( ; i<k+1; i++){
        pq.push(data[i]);
    }
    
    while(!pq.empty()){
        int element = pq.top();
        pq.pop();
        ans.push_back(element);
        if(i < data.size()){
            pq.push(data[i]);
            i++;
        }
    }
    
    for(int v:ans){
        cout << v << " ";
    }
}

// To execute C++, please define "int main()"
int main() {
    
    vector<int> data = { 1, 4, 5, 2, 3, 7, 8, 6, 10, 9};
    int k = 2;

    sort(data, k);
    return 0;
}


