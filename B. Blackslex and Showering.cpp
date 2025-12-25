#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t, n, a, b, sum, ans;
    vector<int> v;

    scanf("%d",&t);

    while(t--){
        scanf("%d",&n);

        v.clear();
        sum = 0;
        scanf("%d",&a);
        v.push_back(a);
        for(int i = 2; i<= n; i++){
            scanf("%d",&b);
            v.push_back(b);
            sum += abs(b-a);
            a = b;
        }
        ans = min(sum, sum - abs(v[1]-v[0]));
        ans = min(ans, sum - abs(v[n-1] - v[n-2]));

        for(int i = 1; i < v.size() - 1; i++){
                   ans = min(ans, sum - abs(v[i] - v[i-1]) - abs(v[i] - v[i+1]) + abs(v[i+1] - v[i-1]));
        }

        printf("%d\n", ans);
    }
return 0;
}
