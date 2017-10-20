#include<bits/stdc++.h>

using namespace std;

int main(){
    int X[] = { 0, 2, 0, 3, 0, 5, 6, 0, 0};
    int Y[] = { 1, 8, 9, 10, 15 };
    
    int m = sizeof(X) / sizeof(X[0]);
    int n = sizeof(Y) / sizeof(Y[0]);

    int k=0;
    for(int i=0; i<m; i++){
        if(X[i] != 0){
            X[k++] = X[i];
        }
    }
    
    int index = k - 1 + n - 1 + 1;
    
    while(k > -1 && n > -1){
        if(X[k-1] > Y[n-1]){
            X[index--] = X[k-1];
            k--;
        }
        else{
            X[index--] = Y[n-1];
            n--;
        }
    }
    
    while(n >= 0){
        X[index--] = Y[n-1];
        n--;
    }
    
    for(int i=0; i<m; i++) cout << X[i] << " ";
    return 0;
}
