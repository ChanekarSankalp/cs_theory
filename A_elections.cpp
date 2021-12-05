#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll a,b,c,mx;
        cin>>a>>b>>c;
        mx=max(a,b);
        mx=max(mx,c);
        if(mx==a && mx==b && mx==c){
            cout<<"1"<<" "<<"1"<<" "<<"1"; 
        }
        else{
            int count=0;
            if(mx==a){count++;}else{count--;}
            if(mx==b){count++;}else{count--;}
            if(mx==c){count++;}else{count--;}
            if(count<0){
                if(mx==a){cout<<"0 ";}else{cout<<(mx+1)-a<<" ";}
                if(mx==b){cout<<"0 ";}else{cout<<(mx+1)-b<<" ";}
                if(mx==c){cout<<"0";}else{cout<<(mx+1)-c;}
            }
            else{
                if(count>0){
                    if(mx==a){cout<<"1 ";}else{cout<<(mx+1)-a<<" ";}
                    if(mx==b){cout<<"1 ";}else{cout<<(mx+1)-b<<" ";}
                    if(mx==c){cout<<"1";}else{cout<<(mx+1)-c;}
                }
            }
        }
        if(t!=0){
            cout<<"\n";
        }
    }
    return 0;
}