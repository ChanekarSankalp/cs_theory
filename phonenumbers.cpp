#include<bits/stdc++.h>
using namespace std;
struct friends{
    string name;
    int m;
    string number[m];
};
int main(){
    map<string,vector<string>>mp;
    int n;
    cin>>n;
    for(int id=0;id<n;id++){
        string name;
        cin>>name;
        int m;cin>>m;
        for(int i=0;i<m;i++){
            string num;cin>>num;
            mp[name].push_back(num);
        }
    }
    cout<<mp.size();
}