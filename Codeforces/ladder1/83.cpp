#include <iostream>
#include <utility>
#include<algorithm>
using namespace std;
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    long int n;
    cin>>n;

    pair<int, int>* pairArr = new pair<int, int>[n * 2];
    for (int i = 0; i < n * 2; ++i)
    {
        cin>>pairArr[i].first;
        pairArr[i].second = i + 1;
    }

    sort(pairArr, pairArr + n * 2);
    bool possible = true;
    for (int i = 0; i < n * 2; i += 2)
    {
        if (pairArr[i].first != pairArr[i+1].first)
        {
            possible = false;
            break;
        }
    }

    if (possible)
    {
        for (int i = 0; i < n * 2; i += 2)
        {
            cout<<pairArr[i].second<<" "<<pairArr[i+1].second<<endl;
        }
    }
    else
    {
        cout<<-1<<endl;
    }

    delete[] pairArr;
    return 0;
}