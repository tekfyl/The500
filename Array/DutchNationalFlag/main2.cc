#include <bits/stdc++.h>

using namespace std;

void sort(vector<int> &data){
    int pivot = 1;
    int n = data.size();
    
    int start = 0, mid = 0, end = n-1;
    
    while(mid <= end){
        if(data[mid] < pivot){
            swap(data[start], data[mid]);
            start++;
            mid++;
        }
        else if(data[mid] > pivot){
            swap(data[mid], data[end]);
            end--;
        }
        else 
            mid++;
    }
    for(int value : data){
        cout << value << " ";
    }
}

int main(){
    int A[] = {0, 1, 2, 2, 1, 0, 0, 2, 0, 1, 1, 0};
    
    vector<int> data;
    
    for(int value : A){
        data.push_back(value);
    }
    sort(data);
    return 0;
}
