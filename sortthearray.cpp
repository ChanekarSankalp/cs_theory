#include<bits/stdc++.h>
using namespace std;
#define N 100111
#define INF 1000000000
int n,a[N];
bool isok(int x,int y){
    while(x<=y){
        swap(a[x],a[y]);x++;y--;
    }
    for(int i=0;i<n;i++){if(a[i]<a[i-1])return false;}
    return true;
}
int main(){
    cin>>n;
    for(int i=0;i<n;i++){cin>>a[i];}
    int l=0;
    a[n]=INF;
    while(l<n-1){
        if(a[l]>a[l+1]){
            break;
        }
        else{l++;}
    }
    int r=l;
    while(r<n-1){
        if(a[r]<a[r+1]){
            break;
        }
        else{r++;}
    }
    if(isok(l,r)){
        cout<<"yes"<<"\n";
        cout<<l+1<<" "<<r+1;
    }
    else{
        cout<<"no";
    }
    return 0;
}