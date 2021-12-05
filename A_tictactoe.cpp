#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        int a[n][m];
        memset(a,-1,sizeof(a));
        int i=1,ans=0,winner=-1;
        while(i<=(n*m)){
            int x,y;
            cin>>x>>y;
            a[x][y]=(i%2==0)?1:0;
            int countl=0,countr=0;
            for(int id=y+1;id<m;id++){
                if(a[x][id]==a[x][id-1]){countr++;}
                else{break;}
            }
            for(int id=y-1;id>=0;id--){
                if(a[x][id]==a[x][id+1]){countl++;}
                else{break;}
            }
            int countu=0,countd=0;
            for(int id=x+1;id<n;id++){
                if(a[id][y]==a[id-1][y]){countd++;}
                else{break;}
            }
            for(int id=x-1;id>=0;id--){
                if(a[id][y]==a[id+1][y]){countl++;}
                else{break;}
            }
            if( ((countl+countr)>=k) && ((countu+countd)>=k && ans==0)){
                winner=(i%2==0)?1:0;ans=19;
            }
            i++;
        }
        if(winner==1){cout<<"Bob";}
            else{
                if(winner==0){cout<<"Alice";}
                else{cout<<"Draw";}
            }
            if(t!=0){cout<<"\n";}
    }
    return 0;
}