#include<bits/stdc++.h>
using namespace std;
int a[100][100];
int n,m;
void solve(int a[][100],int n,int m){
    int b[n][m];
    for(int i=0;i<n;i++){for(int j=0;j<m;j++){b[i][j]=1;}}
    int r[n],c[m];
    for(int i=0;i<n;i++){r[i]=1;}
    for(int i=0;i<m;i++){c[i]=1;}
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]==0){r[i]=0;c[j]=0;}
        }
    }
    for(int i=0;i<n;i++){
        if(r[i]==0){
            for(int k=0;k<m;k++){b[i][k]=0;}
        }
    }
    
    for(int i=0;i<m;i++){
        if(c[i]==0){
            for(int k=0;k<n;k++){b[k][i]=0;}
        }
    }
    int ans1=a[0][0],ans2=b[0][0];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            ans1|=a[i][j];ans2|=b[i][j];
            if(a[i][j]){
                if(!r[i] && !c[j]){cout<<"NO";return;}
            }
        }
    }if(ans1!=ans2){cout<<"NO";return;}
    cout<<"YES"<<"\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<b[i][j];if(j!=m-1){cout<<" ";}
        }
        if(i!=n-1){cout<<"\n";}
    }
}
int main(){
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    int b[n][m];
    //solve(a,n,m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            b[i][j]=0;
        }
    }
    int ans=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]==1){
                int x=1,y=1;
                for(int k=0;k<m;k++){if(a[i][k]!=1){x=0;}}
                for(int k=0;k<n;k++){if(a[k][j]!=1){y=0;}}
                if(x==0 && y==0){ans=-1;}else{b[i][j]=x&y;}
            }if(ans==-1){break;}
        }if(ans==-1){break;}
    }
    int ans1=a[0][0],ans2=b[0][0];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            ans1|=a[i][j];ans2|=b[i][j];
            // if(a[i][j]){
            //     if(!r[i] && !c[j]){cout<<"NO";return;}
            // }
        }
    }
    if(ans==-1 || (ans1!=ans2)){cout<<"NO";}
    else{
        cout<<"YES"<<"\n";
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<b[i][j];if(j!=m-1){cout<<" ";}
            }
            if(i!=n-1)cout<<"\n";
        }
    }
    return 0;
}