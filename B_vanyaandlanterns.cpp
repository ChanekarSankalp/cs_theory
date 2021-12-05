#include<bits/stdc++.h>
using namespace std;
int max(int a,int b){
    return a>b?a:b;
}
int main(){
    int n,l;
    cin>>n>>l;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    double ans=double(max(a[0],l-a[n-1]));
    for(int i=1;i<n;i++){ans=max(ans,((a[i]-a[i-1])/2.0));}
    printf("%.9lf", ans);
    return 0;
}