#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cin>>s;
    int count=0, length = s.length();
    while(length>1){
        int sum=0;
        for(int i=0;i<length;i++){
            sum += s[i]-'0';
        }
        s = to_string(sum);
        length = s.length();
        count++;
    }
    cout<<count<<endl;
    return 0;
}