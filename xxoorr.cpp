#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        ll a[n];unordered_map<ll,ll>mp;
        for(int id=0;id<n;id++){
            cin>>a[id];
        }
        for(int id=0;id<n;id++){
            while(a[id]>0){
                if(a[id]%2!=0){a[id]-=1;mp[1]++;}
                else{
                    ll y=floor(log2(a[id]));
                    a[id]-=ll(pow(2,y));
                    mp[ll(pow(2,y))]++;
                }
            }
        }
        ll count=0;
        for(auto i: mp){
            if(i.second>=k){count+=(i.second/k);if(i.second%k!=0){count+=1;}}
            else{count+=1;}
        }
        cout<<count;
        if(t!=0){cout<<"\n";}
    }
    return 0;
}