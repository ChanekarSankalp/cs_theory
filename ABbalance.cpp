#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int c1=0,c2=0;
        for(int i=0;i<s.length()-1;i++){
            string s1=s.substr(i,2);//cout<<s1<<"\n";
            if(s1[0]=='a' && s1[1]=='b'){c1++;}
            else{if(s1[0]=='b' && s1[1]=='a'){c2++;}}
        }
        //cout<<"c1:"<<c1<<"c2:"<<c2;
        if(c1==c2){
            cout<<s;
        }
        else{
            if(c1>c2){
                string s1=s.substr(0,2);//cout<<s1<<"\n";
                string s2=s.substr(s.length()-2,2);//cout<<s2<<"\n";
                if(s1[0]=='a' && s1[1]=='b' && c1>c2){s[0]='b';c1--;}
                if(s2[0]=='a' && s2[1]=='b' && c1>c2){s[s.length()-1]='a';c1--;}
                if(s1[0]=='a' && s1[1]=='a' && c1>c2){s[0]='b';c2++;}
                if(s2[0]=='b' && s2[1]=='b' && c1>c2){s[s.length()-1]='a';c2++;}
                
            }
            else{
                if(c2>c1){
                    string s1=s.substr(0,2);
                    string s2=s.substr(s.length()-2,2);
                    if(s1[0]=='b' && s1[1]=='a' && c2>c1){s[0]='a';c2--;}
                    if(s2[0]=='b' && s2[1]=='a' && c2>c1){s[s.length()-1]='b';c2--;}
                    if(s1[0]=='b' && s1[1]=='b' && c2>c1){s[0]='a';c1++;}
                    if(s2[0]=='a' && s2[1]=='a' && c2>c1){s[s.length()-1]='b';c1++;}
                }
            }
            if(c1==c2){cout<<s;}
        }
        if(t!=0){cout<<"\n";}
    }
} 