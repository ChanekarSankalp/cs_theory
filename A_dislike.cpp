#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    int a[1001];
    memset(a,-1,sizeof(a));
    int cnt=1,j=1;
    while(cnt<1001){
        if(j%10!=3 && j%3!=0){
            a[cnt]=j;cnt++;
        }
        j++;
    }
    while(t--){
        int x;cin>>x;
        cout<<a[x];if(t!=0){cout<<"\n";}
    }

    return 0;
}