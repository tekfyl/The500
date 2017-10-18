#include <bits/stdc++.h>

using namespace std;

void merge(int X[], int Y[], int n, int m){
    int x = 0, y = 0;
    
    for(int i=0; i<n; i++){
        if(X[x] < Y[y]){
            x++;
        }
        else{
            swap(X[x], Y[y]);
            i++;
            x++;
            
            for(int k=1; k<m && Y[k-1] < Y[k]; k++)
                swap(Y[k], Y[k-1]);
        }
    }
    
    for(int i=0; i<n; i++) cout << X[i] << " ";
    for(int i=0; i<m; i++) cout << Y[i] << " ";
        
}

int main(){
    int X[] = {1, 4, 7, 8, 9};
    int Y[] = {2, 3, 19};
    
    merge(X, Y, 5, 3);
    return 0;
}
