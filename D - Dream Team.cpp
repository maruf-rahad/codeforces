#include <bits/stdc++.h>
using namespace std;
#define MAX                 100100
#define EPS                 1e-9
#define INF                 1e7
#define MOD                 1000000007
#define pb                  push_back
#define mp                  make_pair
#define fi                  first
#define se                  second
#define pi                  acos(-1)
#define sf                  scanf
#define pf                  printf
#define SIZE(a)             ((int)a.size())
#define All(S)              S.begin(), S.end()
#define Equal(a, b)         (abs(a-b) < EPS)
#define Greater(a, b)       (a >= (b+EPS))
#define GreaterEqual(a, b)  (a > (b-EPS))
#define fr(i, a, b)         for(register int i = (a); i < (int)(b); i++)
#define FastRead            ios_base::sync_with_stdio(false); cin.tie(NULL);
#define fileRead(S)         freopen(S, "r", stdin);
#define fileWrite(S)        freopen(S, "w", stdout);
#define Unique(X)           X.erase(unique(X.begin(), X.end()), X.end())

#define isOn(S, j)          (S & (1 << j))
#define setBit(S, j)        (S |= (1 << j))
#define clearBit(S, j)      (S &= ~(1 << j))
#define toggleBit(S, j)     (S ^= (1 << j))
#define lowBit(S)           (S & (-S))
#define setAll(S, n)        (S = (1 << n) - 1)

typedef unsigned long long ull;
typedef long long ll;
typedef map<int, int> mii;
typedef map<ll, ll>mll;
typedef map<string, int> msi;
typedef vector<int> vi;
typedef vector<long long>vl;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<pair<int, int> > vii;
typedef vector<pair<ll, ll> >vll;


//int dx[] = {-1, 0, 1, 0}, dy[] = {0, 1, 0, -1};
//int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1}, dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};
//----------------------------------------------------------------------------------------------------------

struct DSU {
    int u_list[MAX], u_set[MAX];        // u_list[x] : the size of a set x,  u_set[x] : the root of x

    DSU() {}
    DSU(int SZ) { init(SZ); }

    int unionRoot(int n) {
        if(u_set[n] == n) return n;
        return u_set[n] = unionRoot(u_set[n]);
    }

    int makeUnion(int a, int b) {
        int x = unionRoot(a), y = unionRoot(b);
        if(x == y)
            return x;
        else if(u_list[x] > u_list[y]) {
            u_set[y] = x;
            u_list[x] += u_list[y];
            return x;
        }
        else {
            u_set[x] = y;
            u_list[y] += u_list[x];
            return y;
    }}

    void init(int len) {
        //u_list.resize(len+5);
        //u_set.resize(len+5);
        for(int i = 0; i <= len+3; i++)
            u_set[i] = i, u_list[i] = 1;
    }

    bool isSameSet(int a, int b) {
        return (unionRoot(a) == unionRoot(b));
    }
};

ll ans, COMPONENT, oneGCD;
int cnt[MAX];
//bitset<MAX>used;
DSU dsu;
//vector<int>T;
//set<int>COPRIME;

void TRY(int mx) {
    for(int gcd = mx; gcd >= 2; --gcd) {
        int gcdCNT = cnt[gcd];

        for(int mul = gcd+gcd; mul <= mx; mul += gcd) {
            if(cnt[mul] == 0)
                continue;

            if(not dsu.isSameSet(gcd, mul)) {
                //cerr << pst << " " << mul << " ";
                dsu.makeUnion(gcd, mul);
                gcdCNT += cnt[mul];
                //T.push_back(mul);
                //if(COPRIME.count(mul))
                //    COPRIME.erase(mul);
            }
        }

        if(gcdCNT > 1) {
            //cerr << "GCD : " << gcd << " CNT : " << gcdCNT << endl;
            ans += (ll)(gcdCNT-1)*(ll)gcd;
            //used[gcd] = 0;

            //for(auto it : T)
            //    cerr << it << " ";
            //cerr << endl;
        }

        //if(gcdCNT == cnt[gcd]) {
        //    COPRIME.insert(gcd);
        //}
        //T.clear();
    }
}


int main() {
    freopen("dream.in", "r", stdin);
    //freopen("in", "r", stdin);

    int t, n, x;
    scanf("%d", &t);

    for(int Case = 1; Case <= t; ++Case) {
        scanf("%d", &n);
        memset(cnt, 0, sizeof cnt);
        //COPRIME.clear();
        ans = COMPONENT = oneGCD = 0;


        int mx = 0;
        for(int i = 0; i < n; ++i) {
            scanf("%d", &x);
            if(cnt[x] == 0)
                ++cnt[x];
            else
                ans += x;
            mx = max(x, mx);
        }

        dsu.init(mx+2);
        TRY(mx);

        for(int i = 1; i <= mx; ++i) {
            if(dsu.u_set[i] == i and cnt[i]) {
                //cerr << "COMP " << i << endl;
                ++COMPONENT;
            }
            /*else if(dsu.u_list[i] == 1 and cnt[i] == 1) {
                cerr << "*COMP " << i << endl;
                ++COMPONENT;
            }*/
        }


        //cerr << "COMPONENT : " << COMPONENT << endl;
        //cerr << "COPRIME : " << COPRIME.size() << endl;
        ans += max(0LL, COMPONENT-1);

        printf("Case %d: %lld\n", Case, ans);
    }
    return 0;
}

