#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){
        long long n,a,b;
        cin>>n>>a>>b;
        long long ans=0;
        if(a==1){
            if((n-1)%b==0){
                ans=1;
            }
        }
        else{
            long long l=1,r=n;
            while(l<=r){
                if((r-l)%b==0){
                    ans=1;break;
                }
                l*=a;
            }
        }
    if(ans==1){cout<<"yes";}else{cout<<"no";}
    if(t!=0){cout<<"\n";}
    }
    return 0;
}