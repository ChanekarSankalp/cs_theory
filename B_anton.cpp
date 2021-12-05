#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int ind=-1,min=10;
    int n=s.length();
    for(int id=0;id<n;id++){
        int x=(int)s[id]-48;
        //cout<<x<<" ";
        if(x%2==0){
            if(x<(int)s[n-1]-48){
                ind=id;break;
            }
            else{
                ind=id;
            }
        }
    }
    if(ind==-1){
        cout<<"-1";
    }
    else{
        char temp;
        temp=s[s.length()-1];
        s[s.length()-1]=s[ind];
        s[ind]=temp;
        cout<<s;
    }
    return 0;
}