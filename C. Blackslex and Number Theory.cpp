#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, i, a;
    vector<int> v;

    scanf("%d",&t);
    while(t--){
            v.clear();
        scanf("%d",&n);

        while(n--){
            scanf("%d",&a);
            v.push_back(a);
        }
        sort(v.begin(), v.end());

        int ans = max(v[0], v[1] - v[0]);

        printf("%d\n", ans);
    }


    return 0;

}
