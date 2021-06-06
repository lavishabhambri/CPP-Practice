#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int, int> m;
    long long int vasya=0, petya=0;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        m[k] = i;
    }

    int r;
    cin>>r;
    for(int i=0;i<r;i++){
        int k;
        cin>>k;
        vasya += m[k]+1;
        petya += n-m[k];
    }

    cout<<vasya<<" "<<petya<<endl;
    return 0;
}