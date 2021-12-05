#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>v;
        //map<int,int>mp;
        for(int i=0;i<k;i++){
            int x;cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        int steps=0;int l=0,r=v.size()-1;
        while(steps!=n && l<=r){
            v[r]++;//cout<<"v[r]:"<<v[r]<<"\n";
            if(v[r]==n){r--;}
            steps++;//cout<<"steps:"<<steps<<" r:"<<r<<"\n";
            if(steps==v[l]){
                while(steps==v[l]){
                    l++;
                }
            }
            //cout<<"l:"<<l<<"\n";
        }
        //cout<<"r:"<<r<<"\n";
        cout<<k-r-1;
        if(t!=0){cout<<"\n";}
    }
}