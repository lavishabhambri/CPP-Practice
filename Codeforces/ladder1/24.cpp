#include<bits/stdc++.h>
using namespace std;

int main(){
    string name1;
    string name2;
    string name3;
    cin>>name1>>name2>>name3;

    int n1=name1.length(), n2=name2.length(), n3=name3.length(); 
    if(n1+n2 != n3){
        cout<<"NO";
        return 0;
    }

    string name = name1 + name2;
    sort(name.begin(), name.end());
    sort(name3.begin(), name3.end());


    for(int i=0;i<n1+n2;i++){
        if(name[i] != name3[i]){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}