#include<iostream>
#include<string>
#include<algorithm>
#include<math.h>
#include<map>
#include<vector>
using namespace std;

int getMax(vector<int>arr, int n)
{
    int res = arr[0];
    for (int i = 1; i < n; i++)
        res = max(res, arr[i]);
    return res;
}

int main(){
    int t;
    cin>>t;

    for(int m=0;m<t;m++){
        long int n, k;
        cin>>n>>k;
        vector<int> vec;
        map<int, int> M;
        for(int i=0;i<n;i++){
            long int a;
            cin>>a;
            vec.push_back(a);
        }


        for (int i = 0; vec[i]; i++) { 
            
            if(M.find(vec[i])==M.end()) {
                M[vec[i]]=1;
            }
            else {
                M[vec[i]]++;
            }
        }


        long int a, b=getMax(vec, n);
        for(int i=0;i<n;i++){
            cout<<M[i]<<" ";
        }

        
        for(int i=0; i<n; i++){
            if(M[i]==0){
                b=i;
                break;
            }
        }

        long int val;
        if((a+b)%2!=0){
            val = (a+b)/2 + 1;
        }else{
            val = (a+b)/2;
        }
        
        cout<<a <<b<<val;
    }
    
    return 0;
}