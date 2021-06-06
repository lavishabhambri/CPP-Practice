#include <iostream>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    int count = 0;
    while (n != 0)
    {
        int a=n % 10;
        if (a == 4 || a == 7)
        {
            count += 1;
        }
        n /= 10;
    }
    if (count == 4 || count == 7)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}