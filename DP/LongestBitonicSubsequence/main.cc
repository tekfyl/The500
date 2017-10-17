#include <bits/stdc++.h>

using namespace std;

void lis(int dat[], int n){
    vector<int> lis1(n,1), lis2(n,1);
    
    vector<int> data;
    for(int i=0; i<n; i++){
        data.push_back(dat[i]);
    }
    
    for(int i=1; i<n; i++){
        for(int j=0; j<i; j++){
            if(data[j] < data[i]){
                lis1[i] = max(lis1[i], lis1[j]+1);
            }
        }
    }
    
    for(int i=n-2; i>-1; i--){
        for(int j=n-1; j>i; j--){
            if(data[j] < data[i]){
                lis2[i] = max(lis2[i], lis2[j]+1);
            }
        }
    }
    
    vector<int> bitonic(n,0);
    
    for(int i=0; i<n; i++){
        bitonic[i] = lis1[i]+lis2[i]-1;
    }
    
    cout << *max_element(bitonic.begin(), bitonic.end());
}

int main(){
    //int data[] = {0, 8, 4, 12, 2, 10, 6, 14, 1, 9, 5, 13, 3, 11, 7, 15};
    int data[] = {4, 2, 5, 9, 7, 6, 10, 3, 1};
    int n = sizeof(data)/sizeof(data[0]);
    lis(data, n);
    return 0;
}i
