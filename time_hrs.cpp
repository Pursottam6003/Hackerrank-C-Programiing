#include<bits/stdc++.h>
using namespace std;

int main() {

    string s;
    cin >> s;

    int hr;
    hr = (s[0] - '0') * 10 + (s[1] - '0');


    if (s[8] == 'P' && s[9] == 'M') {
        if (hr < 12) {
            hr = hr + 12;
            cout << to_string(hr);
        }
        if (hr == 12) {
            cout << to_string(hr);
        }

    }

    else if (s[8] == 'A' && s[9] == 'M') {
        if (hr < 10) {
            cout << "0";
        }

        if (hr < 12) {

            cout << to_string(hr);
        }
        if (hr == 12) {
            cout << "00";
        }

    }

    

    s.erase(8, 10);
    s.erase(0, 2);
    cout << s;

    return 0;
}
