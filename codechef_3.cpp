#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;int sum=0;
        for(int id=1;id<s.length();id++){
            if(s[id-1]!=s[id]){sum+=1;}
            else{sum+=2;}
        }int ans=sum;
        while(k--){
            int q;
            cin>>q;
            if(q==1){
                if(s[q]!=s[q-1]){ans+=1;}
                else{ans-=1;}
                s[q]=s[q]=='0'?'1':'0';
            }
            else{
                if(q==n){
                    if(s[q-1]!=s[q-2]){ans+=1;}
                    else{ans-=1;}
                    s[q]=s[q]=='0'?'1':'0';
                }
                else{
                    if(s[q-1]!=s[q-2]){ans+=1;}
                    else{ans-=1;}
                    if(s[q-1]!=s[q]){ans+=1;}
                    else{ans-=1;}
                    s[q]=s[q]=='0'?'1':'0';
                }
            }
            if(k==0){
                cout<<ans;
            }
            else{
                cout<<ans<<"\n";
            }
        }
    }
    return 0;
}