//    Assalamu’alaikum, warahmatullahi wabarakatuh   //
          //    BISMILLAH HIR RAHMAN NIR RAHIM   //
          //    “Above all is Allah the King, Truth Before the revelation of the Qur’an upon you is complete.
          //    Don’t be in a hurry with him; rather, my God, advance me in knowledge.”  //
          //    *** AUTHOR : MOHAMMAD TASIN ***    //
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
 
void solve(){
 
        int t;   cin>>t;
        while(t--)
        {
            string s;   cin >> s;
            int zero = 0,one = 0;
            for(int i=0;i<s.size();i++)
            {
               if(s[i]=='0') zero++;
               else one++;
            }
            int k = min(zero,one);
            if(k%2==0) cout << "NET\n";
            else cout << "DA\n";
        
 
        }
}
 
 
int  main(){
 
    inputOutput();
    solve();
    return 0;
 
}
