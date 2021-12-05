#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int m;
        cin>>m;
        int a[m+2],b[m+2];
        int pa[m+2],pb[m+2],sa[m+2],sb[m+2];
        memset(pa,0,sizeof(pa));memset(pb,0,sizeof(pb));memset(sa,0,sizeof(sa));memset(sb,0,sizeof(sb));
        for(int id=1;id<=m;id++){cin>>a[id];}
        for(int id=1;id<=m;id++){cin>>b[id];}
        if(m==1){cout<<"0";}
        else{
            int sum=0;
            for(int id=1;id<=m;id++){sum+=b[id];pb[id]=sum;}
            sum=0;
            for(int id=m;id>=1;id--){sum+=a[id];sa[id]=sum;}
            int ans=INT_MAX,index=0;
            for(int id=1;id<=m;id++){ans=min(ans,max(pb[id-1],sa[id+1]));}
            cout<<ans;
        }
        if(t!=0){cout<<"\n";}
    }
}