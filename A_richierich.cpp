#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,x;
        cin>>a>>b>>x;
        int y=b-a;
        int ans=0;
        if(y%x==0){ans=y/x;}
        else{ans=y/x+1;}
        if(t!=0){cout<<ans<<"\n";}
        else{cout<<ans;}
    }
}