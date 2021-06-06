#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int n,m;   
        cin>>n>>m;
        int arr[m];
        for(int i=0;i<m;i++){
            cin>>arr[i];
        }

        int val=1;
        vector<int> vals;
        for(int i=1;i<=n;i++){
            vals.push_back(i);
        }

        int st=0, e=m-1;
        
        int count=0;
        while(vals.size()!=0){
            if(arr[st] != arr[e]){
                if (std::count(vals.begin(), vals.end(), arr[st])) {
                    count++;
                    vals.erase(arr[st]);
                }

                if (std::count(vals.begin(), vals.end(), arr[e])) {
                    count++;
                    vals.erase(arr[e]);
                }
                
            }else{
                int innerCount1=0, innerCount2 = 0;
                int val1 = arr[st];
                while(arr[st] == arr[st+1]){
                    st++;
                    innerCount1++;
                }
                vals.erase(val1);
                while(arr[e] == arr[e-1]){
                    e--;
                    innerCount2++;
                }

                count += min(innerCount2, innerCount1);
            }

        }
        cout<<count<<endl;

    }
    return 0;
}