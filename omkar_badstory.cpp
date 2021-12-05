#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a;vector<int>b;
        for(int id=0;id<n;id++){
            int x;cin>>x;
            a.push_back(x);
        }
        for(int i=0;i<a.size();i++){
            cout<<"1";
            if(a.size()>300){cout<<"no"<<"\n";}
            for(int j=i+1;j<=a.size();j++){cout<<"2";
                int y=abs(a[i]-a[j]);
                if(!binary_search(a.begin(),a.end(),y))
                    b.push_back(y);
            }
            for(int j=0;j<=b.size();j++){cout<<"3";
                int y=abs(a[i]-a[j]);
                if(!binary_search(a.begin(),a.end(),y) && !binary_search(b.begin(),b.end(),y))
                    b.push_back(y);
            }
        }
        for(int i=0;i<a.size();i++){
            cout<<a[i]<<" ";
        }
    }        
    return 0;
}