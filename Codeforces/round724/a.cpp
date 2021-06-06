#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> v;
        int negative=0;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            if(a<0) negative =1;
            v.push_back(a);   
        } 

        if(negative){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl<<101<<endl;
            for(int i=0;i<=100;i++){
                cout<<i<<" ";
            }
        }


    }    
    return 0;
}


