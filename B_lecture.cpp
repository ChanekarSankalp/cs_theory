#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    unordered_map<string,string>mp;
    while(m--){
        string a,b;
        cin>>a>>b;
        mp[a]=b;
    }
    while(n--){
        string x;
        cin>>x;
        if(x.length()<=mp[x].length()){
            cout<<x;
        }
        else{cout<<mp[x];}
        if(n!=0){cout<<" ";}
    }
    return 0;
}