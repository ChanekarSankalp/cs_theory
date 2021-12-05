#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n;cin>>n;
        ll a[n];
        ll b;ll x;
        cin>>b;cin>>x;
        for(ll id=0;id<n;id++){cin>>a[id];}
        ll i=0,j=0;
        ll sum=0;
        double ans=0.000000;
        while(j<n){
            sum+=a[j];
            if((j-i+1)<b){j++;}
            else{
                if((j-i+1)==b){
                    ans=max(ans,double(sum)/double(j-i+1));sum-=a[i];i++;
                    while(j-i+1>=x){
                        ans=max(ans,double(sum)/double(j-i+1));
                        sum-=a[i];i++;
                    }
                    j++;
                }
            }
        }
        printf("%0.7lf",ans);
    }
    return 0;
}