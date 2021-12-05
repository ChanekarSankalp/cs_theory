#include<bits/stdc++.h>
using namespace std;
bool allocation(int distance,int a[],int n,int k){
    int cows=1;int i=0;
    for(int id=1;id<n;id++){
        if(a[id]-a[i]>=distance){
            cows+=1;i=id;
        }
    }
    if(cows<k){return false;}else{return true;}
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;cin>>t;
    while(t--){
    int n,k;cin>>n>>k;
    int a[n];int distance=INT_MAX;
    for(int id=0;id<n;id++){cin>>a[id];}
    sort(a,a+n);
    for(int id=1;id<n;id++){if(a[id]-a[id-1]<distance){distance=a[id]-a[id-1];}}
    int low=distance;int high=a[n-1]-a[0];int res=-1;//cout<<distance<<" "<<high<<"\n";
    while(low<=high){
        int mid=(low+high)/2;
        if(allocation(mid,a,n,k)){
            res=mid;low=mid+1;//cout<<res<<" ";
        }
        else{
            high=mid-1;
        }
    }
    cout<<res;
    }
}