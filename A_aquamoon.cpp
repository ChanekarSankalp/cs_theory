#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],b[n],c[n];
        int suma=0;int sumb=0;
        for(int id=0;id<n;id++){cin>>a[id];suma+=a[id];}
        for(int id=0;id<n;id++){cin>>b[id];sumb+=b[id];}
        for(int id=0;id<n;id++){c[id]=a[id]-b[id];}
        vector<pair<int,int>>vp;
        if(suma!=sumb){cout<<"-1";}
        else{
            for(int i=0;i<n-1;i++){
                for(int j=i+1;j<n;j++){
                    if(c[i]>0 && c[j]<0){vp.push_back(make_pair(i+1,j+1));c[i]--;c[j]++;if(c[i]!=0){j--;}}
                    else{if(c[i]<0 && c[j]>0){vp.push_back(make_pair(j+1,i+1));c[i]++;c[j]--;if(c[i]!=0){j--;}}}
                }
            }
            cout<<vp.size();
            for(int i=0;i<vp.size();i++){
                if(i==0){cout<<"\n";}
                if(i!=vp.size()-1){cout<<vp[i].first<<" "<<vp[i].second<<"\n";}
                else{cout<<vp[i].first<<" "<<vp[i].second;}
            }
        }
        if(t!=0){cout<<"\n";}
        vp.erase(vp.begin(),vp.end());
    }
    return 0;
}