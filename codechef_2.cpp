#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d,k;
        cin>>a>>b>>c>>d>>k;
        int x=abs(a-c);
        int y=abs(b-d);
        if(t==0){
            if(x+y==k){cout<<"YES";}
            else{
                if(k>x+y && (k-(x+y))%2==0)
                    cout<<"yes";
                else
                    cout<<"no";
            }
        }
        else{
            if(x+y==k){cout<<"YES"<<"\n";}
            else{
                if(k>x+y && (k-(x+y))%2==0)
                    cout<<"yes"<<"\n";
                else
                    cout<<"no"<<"\n";
            }
        }
    }
    return 0;
}