#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cin>>n>>x;
    int a[n];
    int b[x];
    int count=0;
    for(int id=0;id<n;id++){cin>>a[id];}
    for(int id=0;id<x;id++){cin>>b[id];}
    for(int i=0;i<n;i++){
        for(int j=0;j<x;j++){
            if(a[i]==b[j]){
                count++;
            }
        }
    }
    int y=2*count;
    cout<<(n+x-y);
    return 0;
}