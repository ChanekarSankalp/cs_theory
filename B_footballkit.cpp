#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int t[n][2];
    int h[n];
    int a[n];
    for(int i=0;i<n;i++){
        h[i]=n-1;a[i]=n-1;
    }
    map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>t[i][0]>>t[i][1];
        mp[t[i][0]]++;
    }
    for(int i=0;i<n;i++){
        int x=0;
        x=mp[t[i][1]];
        h[i]+=x;a[i]-=x;
    }
    for(int i=0;i<n;i++){
        cout<<h[i]<<" "<<a[i];
        if(i!=n-1){
            cout<<"\n";
        }
    }
    return 0;
}