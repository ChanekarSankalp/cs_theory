#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    for(int i=4;i<=x;i++){
        int y=i,t=1;
        while(y>0){
            int z=y%10;
            if(z==7 || z==4){y/=10;}
            else{t=0;}
            if(t==0){break;}
        }
        if(t==1 && x%i==0){cout<<"YES";return 0;}
    }
    cout<<"NO";
    return 0;
}