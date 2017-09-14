#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; // number of intervals
    cin >> n;
    vector<pair<int,int> > data;
    for(int i=0; i<n; i++){
        int start, end;
        cin >> start >> end;
        data.push_back(make_pair(start,end));
    }
    
    sort(data.begin(), data.end());
    
    stack<pair<int,int> > st;
    st.push(data[0]);
    for(int i=1; i<n; i++){
        auto check = st.top();
        if(data[i].first > check.second){
            st.push(data[i]);
        }    
        else if(data[i].second > check.second){
            int t = st.top().first;
            st.pop(); 
            st.push(make_pair(t, data[i].second));
        }
    }
    
    while(!st.empty()){
        auto out = st.top();
        cout << out.first << " " << out.second << endl;
        st.pop();
    }
    return 0;
}


