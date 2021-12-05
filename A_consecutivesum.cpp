#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll l,r;
        l=((-1)*n)+1;
        r=n;
        cout<<l<<" "<<r;
        if(t!=0){
            cout<<"\n";
        }
    }
    return 0;
}