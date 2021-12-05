#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int x=0;char o='\\';
        if(s[0]=='<' && s[1]=='/' && s[s.length()-1]=='>'){
            if(s.length()==3){x=1;}
            for(int i=2;i<s.length()-1;i++){
                if(s[i]==o){x=1;}
                if(((int)s[i]>=48 && (int)s[i]<=57) || ((int)s[i]>=97 && (int)s[i]<=122)){
                    i++;
                }
                else{
                    x=1;
                }
            }
            
        }
        else{x=1;}
        if(x==0){cout<<"SUCCESS";if(t!=0){cout<<"\n";}}
        else{if(t!=0){cout<<"ERROR"<<"\n";}
            else{cout<<"ERROR";}}
        cout<<s[5]<<" "<<o;
    }
    return 0;
}