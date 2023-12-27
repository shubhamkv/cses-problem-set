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
   //string s1,s2;
   vector<int> v1,v2;
   map<int,int> mp;
   set<int> s1,s2;
              
   cin>>n;
   vector<int> arr(n-1);
   for(int i=0;i<n-1;i++)
    cin>>arr[i];

   //   Agar sale bina edge cases check kiye hua submit kiya toh gaand marrao !!!
   for(int i=1;i<=200000;i++)
     s1.insert(i);
   for(int i=0;i<n-1;i++)
     s2.insert(arr[i]);

   for(auto it: s1)
   {
     if(s2.count(it)==0)
     {
        cout<<it;
        break;
     }
   }                  
   
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