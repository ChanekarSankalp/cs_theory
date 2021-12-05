#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll n;cin>>n;
    ll a[n],sum=0;
    for(int id=0;id<n;id++){cin>>a[id];sum+=a[id];}
    ll s=sum/3,ss=0;ll cnt[n];
    if(sum%3!=0 || n<2){cout<<"0";return 0;}
    for(int i=0;i<n;i++){
        ss+=a[i];
        if(ss==s){
            cnt[i]=1;
        }
        else{cnt[i]=0;}
    }//for(int id=0;id<n;id++){cout<<cnt[id]<<" ";}cout<<"\n";
    for(int i=1;i<n;i++){
        cnt[i]+=cnt[i-1];
    }//for(int id=0;id<n;id++){cout<<cnt[id]<<" ";}cout<<"\n";
    ll ans=0;ss=a[0];
    s*=2;//cout<<s<<"\n";
    for(int i=1;i<n-1;i++){
        ss+=a[i];
        if(ss==s){
            ans+=cnt[i-1];
        }
    }//for(int id=0;id<n;id++){cout<<cnt[id]<<" ";}cout<<"\n";
    cout<<ans;
    return 0;
}