#include "bits/stdc++.h"
using namespace std;

void solve()
{
    int n;
    string s;
    cin >> n >> s;

    for (int len = 1; len < 4; len++)
    {
        int val = 1;
        for (int j = 0; j < len; j++)
        {
            val *= 26;
        }

        for (int i = 0; i < val; i++)
        {
            string s2 = "";
            int num = i;
            for (int r = 0; r < len; r++)
            {
                int d = num % 26;
                s2 += (d + 'a');
                num = num / 26;
            }
            reverse(s2.begin(), s2.end());
            //cout<<s2<<endl;
            if (s.find(s2) == -1)
            {
                cout << s2 << endl;
                return;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
