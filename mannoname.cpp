#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long a[n];
        for(long long id=0;id<n;id++){cin>>a[id];}
        long long prefixsum[n+1]={0};
        for(long long id=1;id<=n;id++){
            if(a[id-1]==-1){
                a[id-1]=(prefixsum[id-1]/(id-1));
            }
            prefixsum[id]=prefixsum[id-1]+a[id-1];
        }
        for(long long id=0;id<n;id++){
            cout<<a[id];
            if(id<n-1){cout<<" ";}
        }
        if(t!=0){cout<<"\n";}
    }
}