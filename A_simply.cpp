#include<bits/stdc++.h>
using namespace std;
bool sorted(int a[],int b[],int n){
    for(int i=1;i<=n;i++){
        if(a[i]!=b[i]){return false;}
    }
    return true;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n+1],b[n+1];memset(b,0,sizeof(b));
        for(int id=1;id<=n;id++){cin>>a[id];b[id]=a[id];}
        int res=0;sort(b,b+n+1);
        for(int i=1;i<=n;i++){
            if(sorted(a,b,n)){break;}
            if(i%2!=0){
                for(int j=1;j<n-1;j+=2){
                    if(a[j]>a[j+1]){int temp=a[j];a[j]=a[j+1];a[j+1]=temp;}
                }res+=1;
            }
            else{
                for(int j=2;j<n;j+=2){
                    if(a[j]>a[j+1]){int temp=a[j];a[j]=a[j+1];a[j+1]=temp;}
                }res+=1;
            }
            
        }
        cout<<res;if(t!=0){cout<<"\n";}
    }
}