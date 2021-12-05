#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        if(s.length()>10){
            string x;
            x.push_back(s[0]);
            int k=s.length()-2;
            string y=to_string(k);
            x.append(y);
            x.push_back(s[s.length()-1]);
            if(n!=0){cout<<x<<"\n";}else{cout<<x;}
        }
        else{
            if(n!=0){cout<<s<<"\n";}else{cout<<s;}
        }
    }
    return 0;
}