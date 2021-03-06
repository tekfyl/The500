#include <bits/stdc++.h>

using namespace std;

void MaxLengthSubArray(const vector<int> &data, int n, int k){
    int ans = INT_MIN;
    
    unordered_map<int, int> map;
    
    map[0] = -1;
    int sum = 0;
    
    for(int i=0; i<n; i++){
        sum += data[i];
        
        if(map.find(sum) == map.end())
            map[sum] = i;
        
        if(map.find(sum-k) != map.end())
            ans = max(ans, i - map[sum-k]);
    }
    
    cout << ans;
}

int main(){
    int A[] = {5, 6, -5, 5, 3, 5, 3, -2, 0};
    int n = sizeof(A)/sizeof(A[0]);
    int k = 8;
    vector<int> data;
    for(int i=0; i<n; i++){
        data.push_back(A[i]);
    }
    
    MaxLengthSubArray(data, n, k);
    return 0;
}
