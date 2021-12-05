#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        long long n=0;
        cin>>n;
        if(n<6){cout<<"15";}
        else{
            if(n%2==0){
                cout<<(n*5)/2;
            }
            else{
                cout<<((n+1)*5)/2;
            }
        }
        if(t!=0){cout<<"\n";}
    }
    return 0;
}