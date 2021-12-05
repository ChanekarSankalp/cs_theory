#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    ll n,q;
    cin>>n>>q;
    ll a[n+1],b[q+1];memset(a,0,sizeof(a));memset(b,0,sizeof(b));
    for(ll id=1;id<=n;id++){cin>>a[id];}
    for(ll id=1;id<=q;id++){cin>>b[id];}
    for(ll i=1;i<=n;i++){a[i]+=a[i-1];}ll i=1;
    while(i<=q){
        ll strh=0,ind=0;
        while(ind<=n){
            strh+=b[i];
            if(i>q){break;}
            ind=lower_bound(a,a+n+1,strh)-a;
            //cout<<"strh:"<<strh<<"ind:"<<ind<<"\n";
            if(ind==n+1){
                if(i!=q){cout<<n<<"\n";}else{cout<<n;}i++;break;
            }
            else{
                if(a[ind]==strh){
                    if(ind==n){if(i!=q){cout<<ind<<"\n";}else{cout<<ind;}i++;break;}
                    else{if(i!=q){cout<<n-ind<<"\n";}else{cout<<n-ind;}i++;}
                }
                else{
                    if(a[ind]>strh){
                        if(i!=q){cout<<n-ind+1<<"\n";}else{cout<<n-ind+1;}i++;
                    }
                }
            }
        }
    }
    return 0;
}