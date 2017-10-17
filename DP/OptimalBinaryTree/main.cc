#include <bits/stdc++.h>

using namespace std;

int obt(int freq[], int i, int j, int level){
    if(j < i) return 0;
    int opt = INT_MAX;
    
    for(int k=i; k<=j; k++){
        int leftopt = obt(freq, i, k-1, level+1);
        int rightopt = obt(freq, k+1, j, level+1);
        
        opt = min(opt, freq[k]*level + leftopt + rightopt);
    }
    return opt;
}

int main(){
    int freq[] = {25, 10, 20};
    int n = 3;
    cout << obt(freq, 0, n-1, 1);
    return 0;
}
