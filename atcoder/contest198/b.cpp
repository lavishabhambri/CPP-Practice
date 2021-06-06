#include<iostream>
#include<string>
using namespace std;

int isPalindrome(string str)
{
    // Start from leftmost and rightmost corners of str
    int l = 0;
    int h = str.length() - 1;
  
    // Keep comparing characters while they are same
    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            
            return 0;
        }
    }
    return 1;
}

int main(){

    int n;
    cin>>n;
    
    string s = to_string(n);
    int zero=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='0'){
            zero++;
        }
    }

    if(isPalindrome(s)==1){
        cout<<"Yes";
        return 0;
    }

    while(zero>0){
        s = '0' + s;
        if(isPalindrome(s)==1){
            cout<<"Yes";
            return 0;
        }
        zero--;
    }
    cout<<"No";
    return 0;
}