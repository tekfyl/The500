#include <bits/stdc++.h>

using namespace std;

void lis(int dat[], int n){
    vector<int> lis(n,1);
    
    vector<int> data;
    for(int i=0; i<n; i++){
        data.push_back(dat[i]);
    }
    
    for(int i=1; i<n; i++){
        for(int j=0; j<i; j++){
            if(data[j] < data[i]){
                lis[i] = max(lis[i], lis[j]+1);
            }
        }
    }
    cout << *max_element(lis.begin(), lis.end());
}

int main(){
    int data[] = {0, 8, 4, 12, 2, 10, 6, 14, 1, 9, 5, 13, 3, 11, 7, 15};
    int n = sizeof(data)/sizeof(data[0]);
    lis(data, n);
    return 0;
}
