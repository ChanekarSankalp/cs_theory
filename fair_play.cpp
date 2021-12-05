#include<bits/stdc++.h>
using namespace std;
int maxi(int a,int b){
    return a>b?a:b;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int max1=maxi(a,b);
        int max2=maxi(c,d);
        if((max1>=c || max1>=d) && (max2>=a ||max2>=b)){
            cout<<"yes";
            if(t!=0)
                cout<<"\n";
        }
        else{
            cout<<"no";
            if(t!=0)
                cout<<"\n";
        }
    }
    return 0;
}