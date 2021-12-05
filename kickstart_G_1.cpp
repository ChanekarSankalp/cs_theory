#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    ll t;
    cin>>t;
    int x=1;
    while(t--){
        ll n;cin>>n;
        ll d,c,m;cin>>d>>c>>m;
        string s;
        cin>>s;
        int a[2]={0,0};
        for(int i=0;i<s.length();i++){
            if(s[i]=='C'){a[0]++;}
            else{if(s[i]=='D'){a[1]++;}}
        }
        int check=1;
        for(int i=0;i<s.length() && check==1;i++){
            if(s[i]=='C' && c>0){a[0]--;c--;}
            else{
                if(s[i]=='C' && c<=0){check=0;}
                else{
                    if(s[i]=='D' && d>0){
                        a[1]--;d--;c+=m;
                    }
                    else{
                        if(s[i]=='D' && d<=0){
                            check=0;
                        }
                    }
                }
            }
        }
        if(a[1]==0){cout<<"Case #"<<x<<": YES";}
        else{cout<<"Case #"<<x<<": NO";}
        if(t!=0){cout<<"\n";}x++;
    }
}