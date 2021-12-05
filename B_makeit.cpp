#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>v;
        ll tr=n;
        while(tr){
            v.push_back(tr%10);
            tr/=10;
        }
        ll ans=INT_MAX;
        for(int i=0;i<v.size();i++){
            ll check=v[i];
            for(int j=i+1;j<v.size();j++){
                ll jr=check+v[j]*10;
                if(jr==0 || jr%25==0){
                    ll x=j-1;
                    ans=min(ans,x);
                }
            }
        }
        cout<<ans;
        if(t!=0){cout<<"\n";}
    }
}