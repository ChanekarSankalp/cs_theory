#include<bits/stdc++.h>
using namespace std;
int main(){
    int r,x1,y1,x2,y2;
    cin>>r>>x1>>y1>>x2>>y2;
    if(x1==x2 && y1==y2){
        cout<<"0";return 0;
    }
    else{
        double d1=0,d2=0;
        d1=pow(abs(x1-x2),2);d2=pow(abs(y1-y2),2);
        double distance=d1+d2;//cout<<distance<<"\n";
        distance=(sqrt(distance));//cout<<distance<<"\n";
        if(distance>r){
        distance-=(double)(2*r);
        long long ans=1;cout<<distance<<"\n";
        ans+=ceil(distance/(double)(2.0*r));
        cout<<ans;}
        else{cout<<"1";}
    }
    return 0;
}