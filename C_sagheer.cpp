#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll ans1=-1,ansc=INT_MAX;
ll cost=INT_MAX;
bool allocation(vector<ll> v,ll n,ll mid,ll s){
    ll sum=0,k=0,i=0;cost=INT_MAX;
    while(sum+v[i]<=s && i<n){
        sum+=v[i];k++;i++;if(k==mid){cost=sum;}
    }
    if(k>=mid){return true;}
    return false;
}
int main(){
    ll n,s;
    cin>>n>>s;ll a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    ll low=1,high=n;
    while(low<=high){
        ll mid=high+(low-high)/2;
        vector<ll>v;
        for(ll i=0;i<n;i++){
            ll sum=a[i]+((i+1)*mid);v.push_back(sum);
        }
        sort(v.begin(),v.end());
        if(allocation(v,n,mid,s)){
            low=mid+1;
            if(mid==ans1){
                ans1=mid;
                if(cost<ansc){
                    ansc=cost;
                }
            }
            else{
                if(mid>ans1){ans1=mid;ansc=cost;}
            }
        }
        else{
            high=mid-1;
        }
        v.erase(v.begin(),v.end());
    }
    if(ans1==-1){ans1=0,ansc=0;}
    cout<<ans1<<" "<<ansc;
}