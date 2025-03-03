//    Assalamu’alaikum, warahmatullahi wabarakatuh   //
          //    BISMILLAH HIR RAHMAN NIR RAHIM   //
          //    “Above all is Allah the King, Truth Before the revelation of the Qur’an upon you is complete. Don’t be in a hurry with him; rather, my God, advance me in knowledge.”  //
          //     AUTHOR : MOHAMMAD TASIN    //
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
        int n,k;cin>>n>>k;
        string s;cin>>s;
        int f[26]={0};
        for(int i=0;i<n;i++){f[s[i]-'a']++;}
        int ct=0;
        for(int i=0;i<26;i++)
        {
            if(f[i]%2!=0){ct++;}
        }
        if(ct-k<=1 && k<=n-1)cout<<yes;
        else{cout<<no;}
 
    }
 
}
 
int main() {
    inputOutput();
    solve();
    return 0;
}
