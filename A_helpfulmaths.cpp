#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,a;
    cin>>s;
    unordered_map<char,int>mp;
    for(int i=0;i<s.length();i++){
        mp[s[i]]++;
    }
    while(mp['1'] || mp['2'] || mp['3']){
        if(mp['1']){
            a.append("1+");mp['1']--;
        }
        else{
            if(mp['2']){
                a.append("2+");mp['2']--;
            }
            else{
                if(mp['3']){
                    a.append("3+");mp['3']--;
                }
            }
        }
    }
    if(a[a.length()-1]=='+'){a.pop_back();}
    cout<<a;
    return 0;
}