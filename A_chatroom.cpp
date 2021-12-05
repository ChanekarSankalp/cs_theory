#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    list<char>l;
    l.push_front('h');l.push_front('e');l.push_front('l');l.push_front('l');l.push_front('o');
    int i=0;
    while(i<s.length()){
        if(s[i]==l.back()){l.pop_back();}i++;
    }
    if(l.empty()){cout<<"YES";}else{cout<<"NO";}
}