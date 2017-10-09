#include <bits/stdc++.h>

#define all(c) c.begin(), c.end()
#define ll long long
#define pb push_back
#define vi vector<int>
#define vll vector<ll>
#define vvi vector< vi >
#define vvl vector< vector<ll> >
#define mk make_pair
#define ii pair <int, int>
#define LL pair <ll, ll>
#define fi first
#define se second
#define mx max_element
#define mn min_element
#define rep(i,n)    for(__typeof(n) i = 0; i < n; i++)
#define rep1(i,n)   for(__typeof(n) i = 1; i <= n; i++)
using namespace std;

double angle(const double &hour, const double &minute){
    double hourAngle, minAngle, diff;
    minAngle = minute*360/60;
    hourAngle = hour*360/12 + minute*360/(12*60);
    diff = abs(hourAngle-minAngle);
    return (diff <= 180 ? diff : 360 - diff);
}

int main(){
    double hour, minute;
    cin >> hour >> minute;
    cout << angle(hour, minute) << endl;
    return 0;
}

