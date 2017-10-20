#include <bits/stdc++.h>
using namespace std;

void klargest(const vector<int> &data, int k){
    priority_queue<int> pq;
    
    int i=0;
    for(i=0; i<data.size(); i++){
        pq.push(data[i]);
    }
    
    for(int i=0; i<k-1; i++) pq.pop();
    
    cout << pq.top();
}

// To execute C++, please define "int main()"
int main() {
    
    vector<int> data  = { 7, 4, 6, 3, 9, 1 };
    int k = 2;
    
    klargest(data, k);
    return 0;
}


