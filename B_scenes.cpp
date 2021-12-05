#include<bits/stdc++.h>
using namespace std;
int p[101];
void primeseive(){
    memset(p,-1,sizeof(p));p[1]=1;
    for(int i=2;i<=sqrt(100);i++){
        if(p[i]==-1){
            for(int j=i*i;j<101;j+=i){
                p[j]=1;
            }
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    primeseive();
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        string x;
        cin>>x;
        int a[10];memset(a,0,sizeof(a));
        for(int i=0;i<n;i++){
            a[((int)x[i])-48]+=1;
        }
        int pa1=0,pa2=0,check=-1;
        for(int i=0;i<n;i++){
            if(p[((int)x[i])-48]==1){
                cout<<"1"<<"\n";cout<<(((int)x[i])-48);check=0;break;
            }
            else{
                int j=((int)x[i])-48;
                for(int k=i+1;k<n;k++){
                    if(p[j*10+((int)x[k]-48)]==1){
                        pa1=2;pa2=j*10+((int)x[k]-48);break;
                    }
                }
            }
        }
        if(check==0){if(t!=0){cout<<"\n";};continue;}
        cout<<pa1<<"\n"<<pa2;if(t!=0){cout<<"\n";}
    }
    return 0;
}