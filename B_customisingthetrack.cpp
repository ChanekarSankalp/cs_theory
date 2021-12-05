#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll sum=0;
        for(int id=0;id<n;id++){
            int x;cin>>x;
            sum+=x;
        }
        ll ans=(sum%n)*(n-(sum%n));
        cout<<ans;
        if(t!=0){cout<<"\n";}
    }
}