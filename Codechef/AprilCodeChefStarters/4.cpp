#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        
        cin>>n>>m;
        string arr[n];
        for(int i=0;i<n;i++){
            string s;
            cin>>s;
            arr[i]=s;
        }

        int k=0, ans=0;
        int arr2[1000000];
        for(int i=0;i<n;i++){
            // string s = arr[i];
            for(int j=0;j<m;j++){
                int size=1;
                if(arr[i][j] == '1'){
                    if(i<n-1 && arr[i+1][j]=='1'){
                        size++;
                        // arr[i+1][j]='0';
                    }
                    if(j<m-1 && arr[i][j+1]=='1'){
                        size++;
                        // arr[i][j+1]='0';
                    }
                    if(i<n-1 && j<m-1 && arr[i+1][j+1]=='1'){
                        size++;
                        // arr[i+1][j+1]='0';
                    }
                    // cout<<"Size"<<size<<endl;
                
                    arr2[k++] = size;
                    arr[i][j] = '0';
                }  
            }
            
        }
        sort(arr2, arr2+k);

        for(int f=1;f<k;f=f+2){
            ans += arr2[f];
        }
        cout<<ans<<endl;
    }


    return 0;
}