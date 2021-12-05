#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s[0]!='1'){
            s.insert(0,"1");
        }
        else{s.insert(1,"0");}
        if(t!=0){cout<<s<<"\n";}
        else{cout<<s;}
    }
    return 0;
}