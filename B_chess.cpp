#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        string a="";
        string b="";
        cin>>a;cin>>b;
        int ans=0;//cout<<a<<" "<<b;
        for(int i=0;i<n;i++){
            if(i==0){
                if(b[0]=='1'){
                    if(a[0]=='0'){ans+=1;}else{if(a[1]=='1'){ans+=1;a[1]='2';}}
                }
            }
            else{
                if(i>0 && i<n-1){
                    if(b[i]=='1'){
                        if(a[i]=='0'){
                            ans+=1;a[i]='2';
                        }
                        else{
                            if(a[i]=='1' || a[i]=='2'){//cout<<"3";
                                if(a[i-1]=='1'){
                                    ans+=1;a[i-1]='2';
                                }
                                else{//cout<<"4";
                                    if(a[i+1]=='1'){
                                        ans+=1;a[i+1]='2';
                                    }
                                }
                            }
                        }
                    }
                }
                else{
                    if(i==n-1){
                        if(b[n-1]=='1'){
                            if(a[n-1]=='0'){
                                ans+=1;
                            }
                            else{
                                if(a[n-2]=='1'){
                                    ans+=1;a[n-2]='2';
                                }
                            }
                        }
                    }
                }
            }
        }
            cout<<ans;if(t!=0){cout<<"\n";}
    }
}