//Problem NO : 1904A Forked//
 //  Handle Id : Crew_X //

#include <bits/stdc++.h>
#define yes "YES\n"
#define no "NO\n"
#define ll long long
using namespace std;

int main() {


    int n;cin>>n;
    while(n--)
    {
        int a,b,xk,yk,xq,yq;
        cin>>a>>b>>xk>>yk>>xq>>yq;
        
        vector<int>dx={-a,-a,a,a,b,b,-b,-b}; // possible knight 
        vector<int>dy={-b,b,b,-b,a,-a,a,-a};    // moves

        set<pair<int,int>>dexk; //position that knight can attack king
        set<pair<int,int>>dexq; //position that knight can attack queen

        for(int i=0;i<8;i++) // understanding all possible positon for king
        {
            dexk.insert({xk+dx[i],yk+dy[i]});
        }
        for(int i=0;i<8;i++)  // understanding all possible positon for queen
        {
            dexq.insert({xq+dx[i],yq+dy[i]}); // dx[i] represents the horizontal move
        }                                     // dy[i] represents the vertical move
        int ans = 0;

        for(auto i:dexk) //This means "for each element i in dexk".
        {
            if(dexq.find(i)!=dexq.end()) //.find(i) searches for i in dexQ.
                                           //If i is found, it returns an iterator to i.
                                        //If i  does not exist, it returns dexQ.end().
                                          //The condition checks if i is present in dexQ.
                                         //If i exists in both dexK and dexQ, 
                                        //it means a knight placed at i would attack both the king and queen.
            {
                ans++; // then we increment if i is found
            }
        }
        cout<<ans<<endl;

    }

    return 0;

}
