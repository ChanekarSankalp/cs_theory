#include<bits/stdc++.h>
using namespace std;
typedef long long ll; 
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        vector<ll>v;
        for(ll id=0;id<n;id++){
            ll x;cin>>x;v.push_back(x);
        }
        sort(v.rbegin(),v.rend());
        ll j=k,ans1=0,i=0;
        while(j--){
            ans1+=v[i];i+=2;
        }
        ll ans2=0;i=1;j=k;
        while(j--){
            ans2+=v[i];i+=2;
        }
        ans2+=v[i-1];
        if(t==0){
            cout<<(ans1>ans2?ans1:ans2);
        }
        else{
            cout<<(ans1>ans2?ans1:ans2);
            cout<<"\n";
        }
        v.clear();
    }
    return 0;
}