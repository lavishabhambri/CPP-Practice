#include <bits/stdc++.h>
using namespace std;

void ans(int64_t x){
    bool br = false;
    for (int64_t a = 1; a*a*a < x && !br; ++a) {
      int64_t b = cbrt(x - a * a * a);
      for (int64_t c = b - 1; c <= b + 1 && !br; ++c) {
        if (c >= 1 && c * c * c + a * a * a == x) {
          cout << "YES\n";
          br = true;
        }
      }
    }
    if (!br) {
      cout << "NO\n";
    }
}

int main(){
    int t;
    cin>>t;

    while(t--){
        int64_t n;
        cin>>n;

        ans(n); 
    }

}