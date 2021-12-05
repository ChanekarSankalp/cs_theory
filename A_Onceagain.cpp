#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int max=INT_MIN,min=INT_MAX;
    for(int i=0;i<n;i++){
        cin>>a[i];if(a[i]>max){max=a[i];}if(a[i]<min){min=a[i];}
    }
    int pos_max=0,pos_min=0;
    //cout<<"max:"<<max<<" min:"<<min<<"\n";
    for(int i=0;i<n;i++){
        if(a[i]==max){pos_max=i;break;}
    }
    int count=0;
    //cout<<"pos_max:"<<pos_max<<"\n";
    while(pos_max!=0){
        swap(a[pos_max],a[pos_max-1]);pos_max--;count++;//cout<<"count:"<<count<<"\n";
    }
    for(int i=n-1;i>=0;i--){
        if(a[i]==min){pos_min=i;break;}
    }
    //cout<<"pos_min:"<<pos_min<<"\n";
    while(pos_min!=n-1){
        swap(a[pos_min],a[pos_min+1]);pos_min++;count++;//cout<<"count:"<<count<<"\n";
    }   
    cout<<count;
    return 0;
}