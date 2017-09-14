#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; // number of intervals
    cin >> n;
    vector<pair<int,int> > data, st;
    for(int i=0; i<n; i++){
        int start, end;
        cin >> start >> end;
        data.push_back(make_pair(start,end));
    }
    
    sort(data.begin(), data.end());
    
    st.push_back(data[0]);
    for(int i=1; i<n; i++){
        auto check = st.back();
        if(data[i].first > check.second){
            st.push_back(data[i]);
        }    
        else if(data[i].second > check.second){
            st.back().second = data[i].second;
        }
    }
    
    for(auto v:st){
        cout << v.first << " " << v.second << endl;
    }
    return 0;
}


