#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long a[n];
        long long sum=0;
        for(int id=0;id<n;id++){
            cin>>a[id];sum+=a[id];
        }
        sort(a,a+n);
        long long b=sum-a[n-1];
        cout<<std::fixed<<setprecision(6)<<(double)a[n-1]/(double)1.0+(double)b/(double)(n-1);
        if(t!=0){cout<<"\n";}
    }
    return 0;
}