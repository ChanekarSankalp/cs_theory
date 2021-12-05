#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int n;
    cin>>n;
    int a[n];
    int k;cin>>k;
    for(int id=0;id<n;id++){
        cin>>a[id];
    }
    int i=0,j=0;
    int sum=0,min=INT_MAX,ans=0;;
    while(j<n){
        sum+=a[j];
        if((j-i+1)<k){j++;}
        else{
            if(j-i+1==k){
                if(sum<min){min=sum;ans=i;}
                sum-=a[i];i++;j++;
            }
        }
    }
    cout<<ans+1;
    return 0;
}