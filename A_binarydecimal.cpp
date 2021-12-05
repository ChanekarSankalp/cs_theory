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
        int max=INT_MIN;
        for(int i=0;i<s.length();i++){
            if(int(s[i])>max){
                max=int(s[i]);
            }
        }
        cout<<(max-48);
        if(t!=0){cout<<"\n";}
    }
}