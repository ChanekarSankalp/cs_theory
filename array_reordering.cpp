#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    return b==0?a:gcd(b,a%b);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>odd;
        vector<int>even;
        for(int id=0;id<n;id++){
            int x;cin>>x;
            if(x%2!=0)
                odd.push_back(x);
            else
                even.push_back(x);
        }
        int ans=odd.size()*even.size();
        int count=0;
        for(int i=0;i<odd.size();i++){
            for(int j=i+1;j<odd.size();j++){
                if(gcd(odd[i],2*odd[j])>1 || gcd(2*odd[i],odd[j])>1){count++;}
            }
        }
        for(int i=0;i<even.size();i++){
            for(int j=i+1;j<even.size();j++){
            if(gcd(even[i],2*even[j])>1 || gcd(2*even[i],even[j])>1){count++;}
            }
        }
        cout<<count+ans;
        if(t!=0){cout<<"\n";}
    }
    return 0;
}