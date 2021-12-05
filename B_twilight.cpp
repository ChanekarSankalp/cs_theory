#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int id=0;id<n;id++){cin>>a[id];}
    int ind=-1,cnt=0;
    for(int id=1;id<n;id++){
        if(a[id-1]<=a[id]){continue;}
        else{cnt++;ind=id;}
    }
    if(ind==-1){
        cout<<"0";
    }
    else{
        if(cnt==1){
            if(a[n-1]<=a[0]){
                cout<<(n-1-ind+1);
            }
            else{
                cout<<"-1";
            }
        }
        else{
            cout<<"-1";
        }
    }
    return 0;
}