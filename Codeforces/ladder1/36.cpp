#include<iostream>
#include<math.h>
#include<climits>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int minDiff=INT_MAX, big=arr[0], small=arr[1];
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(abs(arr[i] - arr[j]) <minDiff){
                minDiff = abs(arr[i] - arr[j]);
                if(arr[i] > arr[j] ){
                    big = i;
                    small=j;
                }else if(arr[i] < arr[j] ){
                    big =j;
                    small=i;
                }else{
                    small = j;
                    big = i;
                }
            }
        }
    }

    cout<<small+1<<" "<<big+1<<endl;
    return 0;
}



// #include <iostream>
// #include <algorithm>

// using namespace std;

// int main()
// {
//     int n, a1;
//     cin >> n >> a1;

//     int prev(a1), cur, reconnaissance(1000), index1, index2;
//     for (int i = 2; i <= n; ++i)
//     {
//         cin >> cur;
//         int diff = abs(cur - prev);
//         if (diff < reconnaissance)
//         {
//             reconnaissance = diff;
//             index1 = i - 1;
//             index2 = i;
//         }
//         prev = cur;
//     }
//     int diff = abs(a1 - prev);
//     if (diff < reconnaissance)
//     {
//         index1 = n;
//         index2 = 1;
//     }
//     cout << index1 << " " << index2 << endl;
//     return 0;
// }