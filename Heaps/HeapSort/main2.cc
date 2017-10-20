#include <bits/stdc++.h>
using namespace std;

void HeapSort(const vector<int> &data){
    priority_queue<int, vector<int>, greater<int>> pq;
    
    for(int v:data){
        pq.push(v);
    }
    
    vector<int> ans;
    
    while(!pq.empty()){
        int in = pq.top();
        ans.push_back(in);
        pq.pop();
    }
    
    //reverse(ans.begin(), ans.end());
    
    for(int v:ans){
        cout << v << " ";
    }
}

// To execute C++, please define "int main()"
int main() {
    
    int A[] = { 6, 4, 7, 1, 9, -2 };
    
    vector<int> data;
    for(int v:A){
        data.push_back(v);
    }
    
    HeapSort(data);
    return 0;
}


