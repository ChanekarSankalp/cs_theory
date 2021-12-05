#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,s,i;
    cin>>n>>s>>i;
    int p[n+1];
    for(int id=1;id<=n;id++){
        cin>>p[id];
    }
    int cnt=0;
    while(s!=i){
        s=p[s];cnt++;
        if(cnt>n){cout<<"-1";return 0;}
    }
    cout<<cnt;
    return 0;
}