#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%2==0){
            for(int i=1;i<=n;i++){
                if(i%2!=0){
                    cout<<i+1;
                }
                else{
                    cout<<i-1;
                }
                if(i!=n){cout<<" ";}
            }
        }
        else{
            for(int i=1;i<=n-1;i++){
                if(i%2!=0){
                    cout<<i+1;
                }
                else{
                    if(i==(n-1)){
                        cout<<i+1<<" "<<i-1;break;
                    }
                    else
                        cout<<i-1;
                }
                if(i!=n){cout<<" ";}
            }
        }
        if(t!=0){cout<<"\n";}
    }
}