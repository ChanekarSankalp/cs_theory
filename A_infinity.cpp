#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        ll k;cin>>k;
        ll r=0,c=0;
        if((ll)sqrt(k)*(ll)sqrt(k)==k){cout<<(ll)sqrt(k)<<" "<<"1";if(t!=0){cout<<"\n";}continue;}
        ll x=(ll)sqrt(k);//cout<<x<<"\n";
        ll z=x+1;//cout<<z<<"\n";
        ll ans=((z*z)-z)+1;//cout<<ans<<"\n";
        if(k==ans){
            r=z,c=z;//cout<<"1";
            cout<<r<<" "<<c;
        }
        else{
            if(k>ans){//cout<<"2";
                r=z;c=z-(k-ans);
                cout<<r<<" "<<c;
            }
            else{
                if(k<ans){//cout<<"3";
                    c=z;r=z-(ans-k);
                    cout<<r<<" "<<c;
                }
            }
        }
        if(t!=0){cout<<"\n";}
    }
    return 0;
}