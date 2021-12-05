#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,m;
    cin>>n>>m;
    long long kmin,kmax;
    long long x,y;
    x=n-m;
    kmax=((x)*(x+1))/2;
    x=n%m;y=n/m;
    kmin=(m-x)*((y*(y-1))/2)+(x)*((y*(y+1))/2);    
    cout<<kmin<<" "<<kmax;
}