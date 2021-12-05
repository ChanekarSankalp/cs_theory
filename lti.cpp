#include<bits/stdc++.h>
using namespace std;
bool cmp(int x,int y){
    return x>y;
}
int main(){
    int n;
    cin>>n;
    int a[n+1];memset(a,0,sizeof(a));
    for(int id=0;id<n;id++){cin>>a[id];}
    sort(a,a+n,cmp);
    int res=0;
    if(n==0){
        cout<<"-1";
    }
    else{
        for(int i=1;i<=n;i++){
            if(a[i-1]!=a[i]){
                res+=a[i-1];
            }
            else{
                res+=a[i-1];a[i]-=1;
            }
        }
        cout<<res;
    }

}