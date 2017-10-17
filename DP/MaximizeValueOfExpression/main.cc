#include <bits/stdc++.h>

using namespace std;

#define m INT_MIN

void MaxExp(int data[], int n){
    vector<int> l1(n+1,m), l2(n,m), l3(n,m), l4(n,m);
    
    for(int i=n-1; i>-1; i--){
        l1[i] = max(l1[i+1], data[i]);
    }
    for(int i=n-2; i>-1; i--){
        l2[i] = max(l2[i+1], l1[i+1]-data[i]);
    }
    for(int i=n-3; i>-1; i--){
        l3[i] = max(l3[i+1], l2[i+1]+data[i]);
    }
    for(int i=n-4; i>-1; i--){
        l4[i] = max(l4[i+1], l3[i+1]-data[i]);
    }
    
    cout << *max_element(l4.begin(), l4.end());
}

int main(){
    int data[] = {3, 9, 10, 1, 30, 40};
    MaxExp(data, 6);
    return 0;
}
