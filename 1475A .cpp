#include <bits/stdc++.h>
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl '\n'
#define ll long long
#define yes "YES\n"
#define no "NO\n"
#define all(s) s.begin(), s.end()
using namespace std;
 
void inputOutput()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
 
void solve()
{
    int t;
    cin >> t;
    while(t--)
    {
       ll x;
       cin >> x;
 
       if(x & (x-1)){cout << yes;}
       else{cout << no;}
    }
 
   
}
 
int main() {
    inputOutput();
    solve();
    return 0;
}
