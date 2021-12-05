#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gcd(ll a, ll b){return b==0?a:gcd(b,a%b);}
ll min(ll a, ll b){return a<b?a:b;}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        ll ans=abs(a-b);
        ll move1=min(a,b);
        if(a==b){cout<<"0"<<" "<<"0";}
        else{
            if(gcd(a,b)>=ans){cout<<gcd(a,b)<<" "<<"0";}
            else{
                ll move2=0;
                move2=move1%ans;
                move2=move2<ans-move2?move2:ans-move2;
                cout<<ans<<" "<<move2;
            }
        }    
        if(t!=0){cout<<"\n";}
    }
    return 0;
}