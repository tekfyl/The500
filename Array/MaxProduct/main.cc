#include <bits/stdc++.h>

using namespace std;

int main(){
    int arr[] = {-10, -3, 4, 6, -2};
    vector<int> data;
    for(int value:arr) data.push_back(value);
    int n = data.size(); 
        
    sort(data.begin(), data.end());
    
    cout << max(data[0]*data[1], data[n-1]*data[n-2]);
    
    return 0;
}
