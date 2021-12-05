#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,max=INT_MIN;
        cin>>n;int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]>max){max=a[i];}
        }
        int ans=a[0];
        for(int i=1;i<n;i++){
            ans&=a[i];
        }
        cout<<ans;
        if(t!=0){cout<<"\n";}
    }
}