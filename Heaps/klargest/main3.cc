#include <bits/stdc++.h>
using namespace std;


// To execute C++, please define "int main()"
int main() {
    
    vector<int> data  = { 7, 4, 6, 3, 9, 1 };
    int k = 2;
    
//    klargest(data, k);
    
    int n = data.size();
    nth_element(data.begin(), data.begin()+n-k, data.end());
    cout << data[n-k];
    return 0;
}


