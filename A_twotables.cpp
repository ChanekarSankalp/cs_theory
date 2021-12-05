#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int w,h;
        cin>>w>>h;
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        int w2,h2;
        cin>>w2>>h2;
        int w1,h1;
        w1=abs(x1-x2);h1=abs(y1-y2);
        int l=x1,r=abs(w-x2),u=abs(h-y2),d=y1;
        double ans1=0,ans2=0,ans=0;
        if(w2<l || w2<r || h2<u || h2<d){
            ans=0;
        }       
        else{
            if(h>=h1+h2){
                ans1=(double)h2-(double)max(u,d);
            }
            if(w>=w1+w2){
                ans2=(double)w2-(double)max(l,r);
            }
        }
        if(h<h1+h2 && w<w1+w2){cout<<"-1";}
        else{
            if(h>=h1+h2 && w>=w1+w2){ans=(double)min(ans1,ans2);}
            else{if(h>=h1+h2){ans=ans1;}else{ans=ans2;}}
            cout<<std::fixed<<setprecision(9)<<ans;
        }
        if(t!=0){cout<<"\n";}
    }
}