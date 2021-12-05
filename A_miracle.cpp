#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int l,r;
        cin>>l>>r;
        int ans=0;
        ans=(r/2)+1;
        if(ans<=l){ans=r-l;}else{ans=r-ans;}
        cout<<ans;
        if(t!=0){cout<<"\n";}
    }
    return 0;
}