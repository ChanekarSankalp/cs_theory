#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
//int dp[102];
//long long x,y;

// int solve(int n){
//     if(dp[n]!=-1){return dp[n];}
//     if(n==3){return ((((y+mod)%mod)-((x+mod)%mod))%mod);}
//     else{
//         if(n==2){return (y+mod)%mod;}
//         if(n==1){return (x+mod)%mod;}
//     }
//     return ((((solve(n-1)+mod)%mod)-((solve(n-2)+mod)%mod))%mod);
// }
int main(){
    int n;//memset(dp,-1,sizeof(dp));
    long long x,y;
    cin>>x>>y>>n;
    long long ans=0;
    ans=n%6;long long a=0;
    switch(ans){
        case 1:
        a=(x+mod)%mod;break;
        case 2:
        a=(y+mod)%mod;break;
        case 3:
        a=(((y+mod)%mod)-((x+mod)%mod))%mod;break;
        case 4:
        a=(((-x+mod)%mod))%mod;break;
        case 5:
        a=(((-y+mod)%mod)%mod);break;
        case 0:
        a=(((x+mod)%mod)-((y+mod)%mod))%mod;break;
        default:break;
    }
    cout<<(a+mod)%mod;
    return 0;
}