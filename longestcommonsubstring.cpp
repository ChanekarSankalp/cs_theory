#include<bits/stdc++.h>
using namespace std;
int ans=0;
int dp[10][10];
string s;
int solve(string x,string y,int n,int m){
    if(n==0 || m==0)
        return 0;
    if(x[n-1]==y[m-1]){
        return dp[n][m]=1+solve(x,y,n-1,m-1);}
    else{
        return dp[n][m]=max(solve(x,y,n-1,m),solve(x,y,n,m-1));
    }
}
int main(){
    string x="abcde";
    string y="abfce";
    int n=x.length(),m=y.length();
    memset(dp,-1,sizeof(dp));
    solve(x,y,n,m);
    return 0;
}