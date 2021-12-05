#include<bits/stdc++.h>
using namespace std;
vector<string>ans;
int len;
void solve(string s,int i,string ss){
    if(i>=len){
        ans.push_back(s);return;
    }
    int x=(int)ss[i];x-=48;char k=(char)(x+96);//cout<<"k:"<<k<<"\n";
    s.push_back(k);
    solve(s,i+1,ss);
    if(ss[i]<'3' && ss[i+1]<'7' && i!=len-1){
        s.pop_back();
        int x=(int)ss[i];int y=(int)ss[i+1];x-=48;y-=48;//cout<<"x:"<<x<<"y:"<<y<<"\n";
        int z=(x*10)+y;char k=(char)(z+96);s.push_back(k);//cout<<"z:"<<z<<"k:"<<k;
        solve(s,i+2,ss);
    }
}
int main(){
    string ss;
    cin>>ss;
    len=ss.length();string s;
    //int x=((int)ss[0]-48)+96;
    //char k=(char)x;s.push_back(x);cout<<s;    
    solve(s,0,ss);
    for(auto i : ans){
        cout<<i<<"\n";
    }
    return 0;
}