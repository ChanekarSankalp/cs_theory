#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int k=0;
        cin>>k;
        int n=0;
        n=int(k/4);n=k-n;
        int a[k],b[k];
        for(int i=0;i<k;i++){cin>>a[i];}
        for(int i=0;i<k;i++){cin>>b[i];}
        sort(a,a+n);sort(b,b+n);
        int me=0,ilya=0;
        int count=0;
        for(int i=n-1;i>=0;i--){
            me+=a[i];count++;ilya+=b[i];
            if(count==n){break;}
        }
        cout<<me<<" "<<ilya<<" "<<count<<" ";
        int x=ilya-me;
        if(x<=0){cout<<"0";}
        else{
            if(x%100==0){cout<<x/100;}
            else{cout<<((x/100)+1);}
        }
        if(t!=0){cout<<"\n";}
    }
}