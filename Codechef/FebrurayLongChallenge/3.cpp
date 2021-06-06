#include<iostream>
#include<string>
using namespace std;

int minutes(string s){
    int hh= (s[1]-'0')*10 + (s[2]-'0')%10;
    int mm=(s[3]-'0')*10 + (s[4]-'0')%10;
    int time;
    if(s[6]=='A'){
       time = hh * 60 + mm;
    }else{
        time = (hh + 12) * 60 + mm;
    }
    return time;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        getline(cin,s);
        int s_minutes= minutes(s);
        int n;
        cin>>n;
        int ans[500]={0}, i=0;
        string s1;
        for(int i=0;i<n;i++){
            getline(cin,s1);
            int s1_minutes = minutes(s1.substr(0, 7));
            int s2_minutes = minutes(s1.substr(9, 16));
            if(s1_minutes <= s_minutes && s2_minutes >= s_minutes){
                ans[i]=1;
            }
        }
        for(int i=0; i<n;i++){
            cout<<ans[i];
        }
        cout<<endl;    
    }
}