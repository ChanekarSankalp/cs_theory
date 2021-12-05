#include<bits/stdc++.h>
using namespace std;
double multiply(double mid, int n){
    double ans=1.0;
    for(int i=1;i<=n;i++){
        ans*=mid;
    }
    return ans;
}
void nthroot(int n,int m){
    double mid;
    double low=1;
    double high=m;
    double eps=10e-6;
    while((high-low)>eps){
        mid=(high+low)/2;
        if(multiply(mid,n)<m)
            low=mid;
        else
            high=mid;
    }
    cout<<low;
}
int main(){
    int n,m;
    cin>>n>>m;
    nthroot(n,m);
    return 0;
}