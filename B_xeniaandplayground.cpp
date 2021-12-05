#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,m;
    cin>>n>>m;
    long long x;cin>>x;m--;
    long long ans=x-1;
    while(m--){
        long long y;cin>>y;
        if(x>y){
            ans+=(n-x)+y;
        }
        else{ans+=(y-x);}
        x=y;
    }
    cout<<ans;
    return 0;
}