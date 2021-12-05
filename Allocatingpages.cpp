#include<bits/stdc++.h>
using namespace std;
bool allocation(int barrier,int a[],int n,int k){
    int students=1,pages=0;
    for(int id=0;id<n;id++){
        if(pages+a[id]>barrier){
            students+=1;pages=0;pages+=a[id];
        }
        else{
            pages+=a[id];
        }
    }
    if(students>k){return false;}else{return true;}
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    int a[n];int sum=0,max=0;
    for(int id=0;id<n;id++){
        cin>>a[id];sum+=a[id];if(a[id]>max){max=a[id];}
    }
    int high=sum;
    int low=max;int res=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(allocation(mid,a,n,k)){
            res=mid;high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    cout<<res;
}