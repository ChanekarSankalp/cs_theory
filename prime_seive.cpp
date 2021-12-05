#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+1]={0};int count=0;
        for(int id=2;id*id<=n;id++){
            count++;
            if(a[id]==1){continue;}
            else{
                int j=id;
                while(j<=n){
                    a[j]=1;j+=id;
                }
            }
        }
        for(int id=2;id<=n;id++){
            if(a[id]==0){count++;}
        }
        if(t==0){cout<<count;}
        else{cout<<count<<"\n";}
    }
    return 0;
}