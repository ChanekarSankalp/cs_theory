#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int n;
    cin>>n;
    int y=n;
    map<int,int>mp;
    int m;
    cin>>m;
    while(n--){
        int s=0;
        while(s<m){
            int x;cin>>x;
            s+=x;
            mp[s]++;
        }
    }
    int max=0;
    for(auto i : mp){
        //cout<<i.first<<" "<<i.second;
        if((max < i.second) && (i.first!=m)){max=i.second;}
    }
    //cout<<max<<"\n"<<n<<"\n";
    cout<<y-max;
}