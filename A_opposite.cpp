#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int n=abs(b-a);
        if(n%2==0){
            int x=a%2,y=b%2;
            if(x!=y || c>2*n || a>2*n || b>2*n){cout<<"-1";}
            else{
                int res=c-n>0?c-n:c+n;cout<<res;
            }
        }
        else{
            int x=a%2,y=b%2;
            if(x==y || c>2*n || a>2*n || b>2*n){cout<<"-1";}
            else{
                int res=c-n>0?c-n:c+n;cout<<res;
            }
        }
        if(t!=0){cout<<"\n";}
    }
    return 0;
}