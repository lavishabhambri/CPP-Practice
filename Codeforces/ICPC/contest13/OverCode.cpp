#include <bits/stdc++.h>
using namespace std;
 
const int maxn=505;   
int a[maxn]; 

int main()
{
    freopen("overcode.in", "r", stdin);
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, i, ans = 0;
        cin>>n;
        for (i = 1; i <= n; i++)
            cin>>a[i];

        sort(a + 1, a + n + 1);
        
        int count=1, j = 1;
        for (i = 2; i <= n; i++)
        {
            if (abs(a[i] - a[j]) > 1000)
            {
                ans += count / 6;
                while (abs(a[j] - a[i]) > 1000)
                    j++;
                count = i - j + 1;
            }
            else
            {
                count++;
                if (count == 6)
                    ans++, count = 0, j = i + 1;
            }
        }
        cout<<ans<<endl;
    }
    fclose(stdin);
    return 0;
}