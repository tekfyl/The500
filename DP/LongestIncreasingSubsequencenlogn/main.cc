#include <bits/stdc++.h>

using namespace std;

void lis(int dat[], int n){
    vector<int> lis;
    
    vector<int> data;
    for(int i=0; i<n; i++){
        data.push_back(dat[i]);
    }
    
    for(int i=0; i<n; i++){
        if(lis.empty() || lis.back() < data[i]){
            lis.push_back(data[i]);
        }
        else{
            int Index = lower_bound(lis.begin(), lis.end(), data[i])-lis.begin();
            lis[Index] = data[i];
        }
    }
    
    cout << lis.size();
}

int main(){
    int data[] = {0, 8, 4, 12, 2, 10, 6, 14, 1, 9, 5, 13, 3, 11, 7, 15};
    int n = sizeof(data)/sizeof(data[0]);
    lis(data, n);
    return 0;
}
