#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,m;
    cin>>s;
    transform(s.begin(),s.end(),s.begin(), ::tolower);
    map<char,int>mp;
    mp['a']++,mp['e']++,mp['i']++,mp['o']++,mp['u']++,mp['y']++;
    for(int i=0;i<s.length();i++){
        if(mp.find(s[i])==mp.end()){
            m.push_back('.');m.push_back(s[i]);
        }
    }
    string r="sanku";
    cout<<char(tolower(int(r[1])))<<"\n";
    cout<<m;
    return 0;
}