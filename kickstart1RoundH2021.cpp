// Username: Jske25
// Lang: C++
// Author: Jack Ke

#include <bits/stdc++.h>
using namespace std;

//file name setup
void setIO(string name = "") {
    ios_base::sync_with_stdio(0); cin.tie(0);
    
    if ((int)(name).size()) {
        freopen((name+".in").c_str(), "r", stdin);
        freopen((name+".out").c_str(), "w", stdout);
    }   
}

int checker(char c, string y) {
    vector<int> v;
    for (int x = 0; x < y.size(); x++) {
        v.push_back(abs(y.at(x)-c));
        v.push_back(abs(c-'a')+abs('z'-y.at(x))+1);
        v.push_back(abs(c-'z')+abs('a'-y.at(x))+1);
    }
    int minimum = 25;
    for (int x = 0; x < v.size(); ++x) {
        minimum = min(minimum, v.at(x));
    }
    return minimum;

}


int main() {
    
    setIO("");

    int T; cin >> T;
    for (int x = 1; x <= T; x++) {
        string s; cin >> s;
        string f; cin >> f;
        int sum = 0;
        for (int x = 0; x < s.size(); x++) {
            sum = sum + checker(s.at(x), f);
        }

        cout << "Case #" << x << ": " << sum << endl;
    }

}
