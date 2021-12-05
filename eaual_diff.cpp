#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        map<int,int>mp;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            mp[x]++;
        }
        if(n<=2){cout<<"0";}
        else{
        int max=INT_MIN;
        for(auto i : mp){
            if(i.second>max){max=i.second;}
        }
        cout<<(n-max);}
        if(t!=0){cout<<"\n";}
    }
}