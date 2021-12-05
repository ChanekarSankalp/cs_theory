#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        ll i=1,count=0,check=1;
        
        ll n1=n-(ll)pow(2,i);
        ll t=i;
        ll t1=n1%k==0?n1/k:n1/k+1;
        cout<<t1<<"\n";
        cout<<(t+t1);
        if(t!=0){cout<<"\n";}
    }
}