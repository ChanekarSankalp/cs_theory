#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,d,p,q;
        cin>>n>>d>>p>>q;
        int ans=0;
        int j=n/d;
        ans+=(((2*p)+((j-1)*q))*j);
        ans*=d;ans/=2;//cout<<ans<<" ";
        int k=n%d;//cout<<k<<" ";
        ans+=(((p)+(j*q))*k);//cout<<ans<<" ";
        if(t!=0)   
            cout<<ans<<"\n";
        else
            cout<<ans;
    }
    return 0;
}