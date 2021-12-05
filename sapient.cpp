#include<bits/stdc++.h>
using namespace std;
int solve(vector<string>& s){
    //cout<<"1";
    int r=s.size();
    int c=s[0].length();
    int ans[r+1][c+1];
    ans[0][0]=1;
    int cnt=1;
    for(int j=1;j<c;j++){
        //cout<<"2";
        if(s[0][j]==s[0][j-1]){
            ans[0][j]=ans[0][j-1];
        }
        else{
            ans[0][j]=cnt+1;cnt++;
        }
    }
    for(int j=1;j<r;j++){
        //cout<<"3";
        if(s[j][0]==s[j-1][0]){
            ans[j][0]=ans[j-1][0];
        }
        else{
            ans[j][0]=cnt+1;cnt++;
        }
    }
    for(int i=1;i<r;i++){
        //cout<<"4";
        for(int j=1;j<c;j++){
            //cout<<"5";
            if(s[i][j]==s[i-1][j]){
                ans[i][j]=ans[i-1][j];
            }
            else{
                if(s[i][j]==s[i][j-1]){
                    ans[i][j]=ans[i][j-1];
                }
                else{
                    ans[i][j]=cnt+1;cnt++;
                }
            }
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<"\n";
    }
    return ans[r-1][c-1];
}
int main(){
    vector<string> s;
    int n;cin>>n;
    for(int i=0;i<n;i++){
        string ss;cin>>ss;
        s.push_back(ss);
    }
    cout<<solve(s);
}