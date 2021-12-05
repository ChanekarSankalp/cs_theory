#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long a[n];
        for(long long id=0;id<n;id++){cin>>a[id];}
        long long j=0,i=0;
        long long ans=0,prod=1;
        while(j<n){
            prod*=a[j];
            if(j-i+1<2){j++;}
            else{
                if(j-i+1==2){
                    ans=max(prod,ans);
                    prod/=a[i];i++;j++;
                }
            }
        }
        cout<<ans;
        if(t!=0){cout<<"\n";}
    }
    return 0;
}