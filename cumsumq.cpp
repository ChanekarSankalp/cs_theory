#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int id=0;id<n;id++){cin>>a[id];}
	int q;
	cin>>q;
	int prefixsum[n+1];
	prefixsum[0]=0;
	for(int id=1;id<=n;id++){
		prefixsum[id]=prefixsum[id-1]+a[id-1];
	}
	while(q--){
		int i,j;
		cin>>i>>j;
		cout<<prefixsum[j+1]-prefixsum[i];
		if(q!=0){cout<<"\n";}
	}
	return 0;
}