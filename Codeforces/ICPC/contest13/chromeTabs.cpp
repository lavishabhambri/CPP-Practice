#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("tabs.in", "r", stdin);
    int cas;
    scanf("%d", &cas);
    while (cas--)
    {
        int n, k, pos, ans;
        scanf("%d%d", &n, &k);
        if (k == 1 || k == n)
            ans = 1;
        else
            ans = 2;
        if (k == 1 && n == 1)
            ans = 0;
        printf("%d\n", ans);
    }
    return 0;
}