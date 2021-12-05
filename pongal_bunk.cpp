#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    ll n,q,l,r,m;
    cin>>n>>q;
    ll a[n+2];memset(a,0,sizeof(a));
    ll b[n+2];memset(b,0,sizeof(b));
    while(q--){
        l=0;r=0;
        cin>>l>>r;
        a[l]+=1;a[r+1]-=1;b[r+1]-=(r-l+1);
    }
    //for(int id=1;id<=n;id++){cout<<a[id];}cout<<"\n";
    ll sum=0;
    for(int id=1;id<=n;id++){
        sum+=a[id];a[id]=sum;
    }
    //for(int id=1;id<=n;id++){cout<<a[id];}cout<<"\n";
    sum=0;
    for(int id=1;id<=n;id++){
        sum+=b[id]+a[id];b[id]=sum;
    }
    //for(int id=0;id<n;id++){cout<<b[id];}cout<<"\n";
    cin>>m;
    while(m--){
        int x;
        cin>>x;
        cout<<b[x];
        if(m!=0){cout<<"\n";}
    }
    return 0;
}