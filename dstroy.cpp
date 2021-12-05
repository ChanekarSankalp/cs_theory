#include<bits/stdc++.h>
using namespace std;
bool check(int a[],int k,int n,int mid){
    int sum=0;
    for(int id=0;id<n;id++){
        if(a[id]>mid){
            sum+=mid;
        }
        else{
            sum+=a[id];
        }
    }
    int y=sum/mid;
    if(y>=k){return true;}else{return false;}
}
int main(){
    int n,k;cin>>n>>k;
    int a[n];int sum=0,min=INT_MAX;
    for(int id=0;id<n;id++){cin>>a[id];if(a[id]<min){min=a[id];}sum+=a[id];}
    int low=min,high=sum,res=0;
    while(low<=high){
        int mid=high+(low-high)/2;
        if(check(a,k,n,mid)){
            res=mid;low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    cout<<res;
    return 0;
}