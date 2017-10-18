#include <bits/stdc++.h>

using namespace std;

bool isCon(const vector<int> &data, int i, int j, int mini, int maxi){
    if(maxi-mini != j-i) return false;
    
    unordered_set<int> check;
    for(int k=i; k<=j; k++){
        if(check.find(data[k]) != check.end()) 
            return false;
        check.insert(data[k]);
    }
    
    return true;
}

void findMaxSubArray(const vector<int> &data, int n){
    int ans = INT_MIN;
    
    for(int i=0; i<n-1; i++){
        int mini = data[i], maxi = data[i]; 
        for(int j=i+1; j<n; j++){
            mini = min(data[j], mini);
            maxi = max(data[j], maxi);
            
            if(isCon(data, i, j, mini, maxi)){
                ans = max(ans, maxi-mini+1);
            }
        }
    }
    
    cout << ans;
}

int main(){
    int A[] = {2, 0, 2, 1, 4, 3, 1, 0};
    int n = sizeof(A)/sizeof(A[0]);
    
    vector<int> data;
    for(int i=0; i<n; i++){
        data.push_back(A[i]);
    }
    
    findMaxSubArray(data, n);
    return 0;
}
