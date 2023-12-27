#include <iostream>
#include <bits/stdc++.h>
typedef long long int ll;
#define pb push_back;
#define mkp make_pair;
#define all(v) v.begin(), v.end()
const int M = 1e9 + 7;
const int N = 1e5 + 5;
using namespace std;
void solve()
{
   ll n,a,b,c,m,k,p,q,r,x,y,z;
   double d1,d2,d3,d4;
   string s1,s2;
   vector<int> v1,v2;
   map<int,int> mp;
   set<int> s;
              
   cin>>s1;
   n = s1.size();
   ll maxi=1, i=0,j=i+1;                 
   while(j<n)
   {
      if(s1[j-1]!=s1[j])
      {
        i=j;
        j++;
      }
      else if(s1[j-1]==s1[j])
      {
        j++;
        maxi=max(maxi,j-i);
      }
   }
   cout<<maxi;
}
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   ll t,a=1,b,c;
   while(a--)
   {
        solve();
   }
   return 0;
}