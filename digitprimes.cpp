#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 3e5 + 5;
ll a[N];
int main()
{
    ios_base ::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, p;
    cin >> n >> p;
    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        a[max(0, x - y)]++;
        a[min(p + 1 , x + y +1)]--;
    }
    for(int id=0;id<=p;id++){cout<<a[id]<<" ";}
    for(int i = 1; i <= p; i++) a[i] += a[i - 1];
    for(int id=0;id<=p;id++){cout<<a[id]<<" ";}
    int ans = 0, cnt = 0;
    for(int i = 0; i <= p; i++){
        if(a[i] != 1) cnt++;
        else ans = max(ans, cnt), cnt = 0;
    }
    cout << max(ans, cnt);
return 0;
}