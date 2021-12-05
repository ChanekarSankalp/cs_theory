#include<bits/stdc++.h>
using namespace std;
int m;
vector<string> vp(102);

string ans="";
string mini(string x,string y){
    int cnt=0,max=0;
        for(int i=1;i<m;i++){
            max+=cnt;
            if(x[i]==x[i-1]){cnt++;}
            else{
                cnt=0;
            }
        }//cout<<"max:"<<max<<x<<"\n";
        int cnt1=0,max1=0;
        for(int i=1;i<m;i++){
            max1+=cnt1;
            if(y[i]==y[i-1]){cnt1++;}
            else{
                cnt1=0;
            }
        }//cout<<"max1:"<<max1<<y<<"\n";
        if(max>max1){return y;}else{return x;}
}
string solve(string s,int n){
    if(n<0){
        return s;
    }
    if(vp[s]!="-1"){return vp[n];}
    if(s[n-1]=='?'){
        s[n-1]='R';
        string x=solve(s,n-1);
        s[n-1]='B';
        string y=solve(s,n-1);
        return vp[s]=ans=mini(ans,mini(x,y));
    }
    else{return solve(s,n-1);}
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        for(int id=0;id<102;id++){string s="-1";vp[id]=s;}
        int n;cin>>n;
        m=n;for(int i=1;i<=n;i++){ans.push_back('R');}
        string s;cin>>s;
        cout<<solve(s,n);if(t!=0){cout<<"\n";}
    }
    return 0;
}