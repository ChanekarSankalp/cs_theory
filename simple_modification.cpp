#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int n,m,u,q;
    cin>>n>>m>>u>>q;
    ll a[n+1][m+1];
    ll b[n+1][m+1];
    memset(b,0,sizeof(b));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    while(u--){
        int r1,c1,r2,c2;ll k;cin>>k>>r1>>c1>>r2>>c2;
        if(c2+1<m)
            b[r1][c2+1]-=k;
        if(r2+1<n)
            b[r2+1][c1]-=k;
        if(r2+1<n&&c2+1<m)
            b[r2+1][c2+1]+=k;
        b[r1][c1]+=k;
    }
    for(int i=0;i<n;i++){ll sum=0;
        for(int j=0;j<m;j++){sum+=b[i][j];b[i][j]=sum;}
    }
    for(int i=0;i<m;i++){ll sum=0;
        for(int j=0;j<n;j++){sum+=b[j][i];b[j][i]=sum;}
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){a[i][j]+=b[i][j];}
    }
    for(int i=0;i<n;i++){ll sum=0;
        for(int j=0;j<m;j++){sum+=a[i][j];a[i][j]=sum;}
    }
    for(int i=0;i<m;i++){ll sum=0;
        for(int j=0;j<n;j++){sum+=a[j][i];a[j][i]=sum;}
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){cout<<a[i][j];}cout<<"\n";
    }
    while(q--){
        int r1,c1,r2,c2;
        cin>>r1>>c1>>r2>>c2;
        ll ans=a[r2][c2];
        if((r1-1)>=0){ans-=a[r1-1][c2];}
        if((c1-1)>=0){ans-=a[r2][c1-1];}
        if((r1-1)>=0 && (c1-1)>=0){ans+=a[r1-1][c1-1];}
        cout<<ans;
        cout<<"\n";
    }
    return 0;
}