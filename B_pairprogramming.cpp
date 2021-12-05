#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int k,n,m;
        cin>>k>>n>>m;
        int a[n];int b[m];
        for(int id=0;id<n;id++){cin>>a[id];}
        for(int id=0;id<m;id++){cin>>b[id];}
        int i=0,j=0;vector<int>v;int x=1;
        while(i<n || j<m){
            if(a[i]==0 && i<n){v.push_back(a[i]);k++;i++;continue;}
            if(b[j]==0 && j<m){v.push_back(b[j]);k++;j++;continue;}
            if(a[i]<=k && i<n){v.push_back(a[i]);i++;continue;}
            if(b[j]<=k && j<m){v.push_back(b[j]);j++;continue;}
            if((a[i]>k && i<n) || (b[j]>k && j<m)){x=0;break;}
        }
        if(x==0){cout<<"-1";}
        else{
            for(int id=0;id<v.size();id++){
                if(id!=v.size()-1){cout<<v[id]<<" ";}
                else{cout<<v[id];}
            }
        }
        v.erase(v.begin(),v.end());
        if(t!=0){cout<<"\n";}
    }
}