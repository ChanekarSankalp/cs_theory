#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int h,w;
        cin>>h>>w;
        int a[h][w];
        memset(a,0,sizeof(a));
        for(int i=0;i<w;i+=2){
            a[0][i]=1;a[h-1][i]=1;
        }
        for(int i=1;i<h-1;i++){
            if(a[i-1][0]==1 || a[i+1][0]==1 || a[i][1]==1 || a[i-1][1]==1 || a[i+1][1]==1){continue;}
            else{a[i][0]=1;}
        }
        for(int i=1;i<h-1;i++){
            if(a[i-1][w-1]==1 || a[i+1][w-1]==1 || a[i][w-2]==1 || a[i-1][w-2]==1 || a[i+1][w-2]==1){continue;}
            else{a[i][w-1]=1;}
        }
        for(int i=0;i<h;i++){
            for(int j=0;j<w;j++){
                cout<<a[i][j];
            }
            cout<<"\n";
        }
        if(t!=0){cout<<"\n";}
    }
}