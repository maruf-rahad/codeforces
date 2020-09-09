#include <bits/stdc++.h>
using namespace std;

int lft[300000], rht[300000];

int main() {
    char ch;
    int q, lcnt = 0, rcnt = 0, id;
    cin >> q;
    while(q--) {
        cin >> ch >> id;
        if(ch == 'L')
            lft[id] = ++lcnt;
        else if(ch == 'R')
            rht[id] = ++rcnt;
        else {
            if(lft[id] != 0)
                cout << min(abs(lft[id]-lcnt), lft[id]-1+rcnt) << endl;
            else
                cout << min(abs(rht[id]-rcnt), rht[id]-1+lcnt) << endl;
        }
    }
    return 0;
}

