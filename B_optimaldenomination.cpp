#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    return b==0?a:gcd(b,a%b);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int id=0;id<n;id++){cin>>a[id];}
        sort(a,a+n);
        
        if(t!=0){cout<<"\n";}
    }
    return 0;
}