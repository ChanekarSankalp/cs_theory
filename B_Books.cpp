#include<bits/stdc++.h>
using namespace std;
int max(int a,int b){
    return a>=b?a:b;
}
int main(){
    int n,t=0;
    cin>>n;
    cin>>t;
    int a[n];
    for(int id=0;id<n;id++){
        cin>>a[id];
    }
    int i=0,j=0,sum=0,ans=INT_MIN;
    //cout<<"t:"<<t<<"\n";
    while(j<n){
        sum+=a[j];//cout<<"0:"<<sum<<"\n";
        if(sum<t){ans=max(j-i+1,ans);j++;}
        else{
            if(sum==t){
                ans=max(ans,j-i+1);sum-=a[i];j++;i++;
            }
            else{
                if(sum>t){
                    while(sum>t){
                        sum-=a[i];i++;
                    }
                    if(sum<=t){ans=max(ans,j-i+1);}
                    
                }
                j++;
            }
        }
    }
    cout<<ans;
}