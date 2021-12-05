#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    if(n-2>m || (n+1)*2<m){
        cout<<"-1";
    }
    else{
        string x;
        string o="11",z="0",oo="1";
        while(n>0 && m>0){
            if(n*2<m){
                x.append(o);m-=2;
                x.append(z);n-=1;
            }
            else{
                x.append(oo);m-=1;
                x.append(z);n-=1;
            }
        }
        while(m>0){
            x.append(oo);m--;
        }
        cout<<x;
    }
    return 0;
}