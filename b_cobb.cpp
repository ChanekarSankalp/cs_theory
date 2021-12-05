#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<pair<int,int>>vp;
        for(int id=0;id<n;id++){
            int x;
            cin>>x;
            vp.push_back(make_pair(x,id+1));
        }
        sort(vp.begin(),vp.end());
        int low=0,high=n-1;
        int ans=INT_MIN,pro=0;
        while(low<high){
            pro=(vp[low].second*vp[high].second)-(k*(vp[low].first|vp[high].first));
            ans=max(pro,ans);
            if((k*(vp[low].first|vp[high].first))>(vp[low].second*vp[high].second)){
                high--;
            }
            else{
                if((k*(vp[low].first|vp[high].first))<(vp[low].second*vp[high].second)){
                    low++;
                }
                else{
                    low++;high--;
                }
            }
        }
        cout<<ans;
        if(t!=0){cout<<"\n";}
    }
    return 0;
}