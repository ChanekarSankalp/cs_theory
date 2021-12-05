#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int x1,x2,x3;
        int y1,y2,y3;
        cin>>x1>>y1;
        cin>>x2>>y2;
        cin>>x3>>y3;
        int ans=0;
        if(x1==x2 && y1==y2){cout<<"0";}
        else{
            if(x1==x2 && x2==x3){if((y3<y1 && y3>y2) || (y3>y1 && y3<y2)){ans=2;}ans+=abs(y1-y2);}
            else{
                if(y1==y2 && y2==y3){if((x3<x1 && x3>x2) || (x3>x1 && x3<x2)){ans=2;}ans+=abs(x1-x2);}
                else{ans=0;ans+=abs(x1-x2)+abs(y1-y2);}
            }
            cout<<ans;
        }
        if(t!=0){cout<<"\n";}
    }
    return 0;
}