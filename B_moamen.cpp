#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n=0,k=1;
        cin>>n>>k;
        int a[n];
        int b[n];
        map<int,int>mp;
        for(int id=0;id<n;id++){
            cin>>a[id];b[id]=a[id];
        }
        sort(a,a+n);
        for(int id=0;id<n;id++){mp[a[id]]=id;}
        int cnt=1;
        for(int id=1;id<n;id++){
            if(b[id-1]<b[id] && mp[b[id-1]]==mp[b[id]]-1){
                continue;
            }
            else{
                cnt++;
            }
        }
        if(cnt<=k){
            cout<<"YES";}
        else{
            cout<<"NO";}
        if(t!=0){cout<<"\n";}
    }
    return 0;
}