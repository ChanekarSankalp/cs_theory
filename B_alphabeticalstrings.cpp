#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int id;
        for(id=0;id<s.length();id++){
            if(int(s[id])==97){
                break;
            }
        }
        int x=1;
        if(id==s.length()){cout<<"NO";}
        else{
            int rev=id-1,front=id+1;
            while(rev>=0 || front<s.length()){
                if(int(s[rev])==(int(s[id])+1) && rev>=0){
                    id=rev;rev--;
                }
                else{
                    if(int(s[front])==(int(s[id])+1) && front<s.length()){
                        id=front;front++;   
                    }
                    else{
                        x=0;break;
                    }
                }
            }
            if(x==0){cout<<"NO";}else{cout<<"YES";}
        }
        if(t!=0){cout<<"\n";}
    }
}