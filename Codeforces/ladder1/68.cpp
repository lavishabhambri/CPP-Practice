#include<iostream>
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

int main(){
    string s1,s2;
    getline(cin, s1);
    getline(cin, s2);

    unordered_map<char, int> M;

    for (int i = 0; s1[i]; i++) 
    {   
        if(s1[i]==' '){
            continue;
        }
        if (M.find(s1[i]) == M.end()) 
        {
            M.insert(make_pair(s1[i], 1));
        }

        else
        {
            M[s1[i]]++;
        }
    }
    
    for(int i=0; s2[i];i++){
        if(s2[i]==' '){
            continue;
        }
        if(M[s2[i]]>0){
            M[s2[i]]--;
        }else{
            cout<<"NO"<<endl;
            return 0;
        }
    }

    cout<<"YES"<<endl;
    return 0;

}